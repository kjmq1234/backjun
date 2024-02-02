#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	n;
	int* arr;
	int temp;
	int	cnt = 0;

	scanf("%d", &n);
	int	i = n;
	while (i != 0)
	{
		i /= 10;
		cnt++;
	}
	arr = (int*)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
	{
		arr[i] = n % 10;
		n /= 10;
	}
	for (int i = 0; i < cnt - 1; i++)
	{
		for (int j = 0; j + 1 + i < cnt; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < cnt; i++)
		printf("%d", arr[i]);
}