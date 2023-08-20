#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	arr[102];
	char	stack[102];
	int		idx = 0;
	int		j;

		while (1)
		{
			idx = 0;
			j = 0;
			scanf("%[^\n]", arr);
			getchar();
			if (strcmp(arr, ".") == 0)
				exit(0);
			while (arr[j] != '.')
			{
				if (arr[j] == '(')
					stack[idx++] = '(';
				else if (arr[j] == '[')
					stack[idx++] = '[';
				else if (idx == 0 && (arr[j] == ')' || arr[j] == ']'))
				{
					idx++;
					break;
				}
				else if (idx > 0 && stack[idx - 1] != '(' && arr[j] == ')')
					break;
				else if (idx > 0 && stack[idx - 1] != '[' && arr[j] == ']')
					break;
				else if (stack[idx - 1] == '(' && arr[j] == ')')
					idx--;
				else if (stack[idx - 1] == '[' && arr[j] == ']')
					idx--;
				j++;
			}
			if (idx == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
}