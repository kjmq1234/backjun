#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	valid(int* arr, int x)
{
	for (int i = 0; i < x; i++)
	{
		if (x == i || arr[x] == arr[i] || x + arr[x] == i + arr[i] || x - arr[x] == i - arr[i])
			return (0);
	}
	return (1);
}

void recursive(int* arr, int x, int* count, int scale)
{
	if (x == scale)
		*count += 1;
	else
	{
		for (int i = 0; i < scale; i++)
		{
			arr[x] = i;
			if (valid(arr, x))
				recursive(arr, x + 1, count, scale);
		}
	}
}

int	main(void)
{
	int	n;
	int	*arr;
	int	cnt = 0;
	
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		arr[i] = 0;
	recursive(arr, 0, &cnt, n);
	printf("%d", cnt);
}