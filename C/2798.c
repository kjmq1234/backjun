#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	target;
	int* arr;
	int	max = 300001;

	scanf("%d %d", &n, &target);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (target - (arr[i] + arr[j] + arr[k]) >= 0 && target - (arr[i] + arr[j] + arr[k]) <= max)
					max = target - (arr[i] + arr[j] + arr[k]);
			}
		}
	}
	printf("%d", target - max);
}