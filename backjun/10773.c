#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int* arr;
	int	num;
	int	idx = 0;
	int	sum = 0;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num)
			arr[idx++] = num;
		else
			idx--;
	}
	for (int i = 0; i < idx; i++)
	{
		sum += arr[i];
	}
	printf("%d", sum);
	free(arr);
}