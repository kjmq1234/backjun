#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	binarysearch(long long* arr, int size, long long key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key > arr[mid])
			low = mid + 1;
		else if (key < arr[mid])
			top = mid - 1;
		else if (key == arr[mid])
			return (1);
	}
	return (0);
}

long long	compare(const void* a, const void* b)
{
	long long one = *(long long*)a;
	long long two = *(long long*)b;

	if (one > two)
		return (1);
	else if (one < two)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	int		n, m;
	long long		temp;
	long long*	arr;

	scanf("%d", &n);
	arr = (long long*)malloc(sizeof(long long) * n);
	for (int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	qsort(arr, n, sizeof(long long), compare);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%lld", &temp);
		if (binarysearch(arr, n, temp))
			printf("1\n");
		else
			printf("0\n");
	}
}