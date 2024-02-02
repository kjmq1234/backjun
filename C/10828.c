#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int	n;
	int* arr;
	char sig[6];
	int	num;
	int	idx = -1;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &sig);
		if (strcmp(sig, "push") == 0)
		{
			scanf("%d", &num);
			arr[++idx] = num;
		}
		else if (strcmp(sig, "pop") == 0)
		{
			if (idx != -1)
				printf("%d\n", arr[idx--]);
			else
				printf("-1\n");
		}
		else if (strcmp(sig, "size") == 0)
		{
			printf("%d\n", idx + 1);
		}
		else if (strcmp(sig, "empty") == 0)

		{
			if (idx == -1)
				printf("%d\n", 1);
			else
				printf("%d\n", 0);
		}
		else if (strcmp(sig, "top") == 0)
		{
			if (idx == -1)
				printf("%d\n", -1);
			else
				printf("%d\n", arr[idx]);
		}
	}
}