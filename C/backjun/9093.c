#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int	n;
	char str[1001];
	char stack[21];
	int	idx = -1;
	int	j;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		getchar();
		scanf("%[^\n]", str);
		j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == ' ')
			{
				while (idx != -1)
					printf("%c", stack[idx--]);
				printf(" ");
			}
			else
				stack[++idx] = str[j];
			j++;
		}
		while (idx != -1)
			printf("%c", stack[idx--]);
		printf("\n");
	}
}