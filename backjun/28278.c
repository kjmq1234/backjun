#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int* arr;
	int	sig;
	int	num;
	int	idx = -1;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sig);
		switch (sig)
		{
		case 1:
		{
			scanf("%d", &num);
			arr[++idx] = num;
			break;
		}
		case 2:
		{
			if (idx != -1)
				printf("%d\n", arr[idx--]);
			else
				printf("-1\n");
			break;
		}
		case 3:
		{
			printf("%d\n", idx + 1);
			break;
		}
		case 4:
		{
			if (idx == -1)
				printf("%d\n", 1);
			else
				printf("%d\n", 0);
			break;
		}
		case 5:
		{
			if (idx == -1)
				printf("%d\n", -1);
			else
				printf("%d\n", arr[idx]);
		}
		}
	}
}