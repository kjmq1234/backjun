#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	char arr[51];
	char stack[51];
	int	idx = 0;
	int	j;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		idx = 0;
		j = 0;
		scanf("%s", &arr);
		while (arr[j] != '\0')
		{
			if (arr[j] == '(')
				stack[idx++] = '(';
			else if (idx == 0 && arr[j] == ')')
			{
				idx++;
				break;
			}
			else if (idx != 0 && arr[j] == ')')
				idx--;
			j++;
		}
		if (idx == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}