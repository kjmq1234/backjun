#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long	compare(const void* a, const void* b)
{
	long long num1 = *(long long*)a;
	long long num2 = *(long long*)b;
	if (num1 > num2)
		return (1);
	else if (num1 < num2)
		return (-1);
	else
		return (0);
}

long long	binarysearch(long long* arr, long long size, long long key)
{
	long long	low = 0;
	long long top = size - 1;
	long long mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key > arr[mid])
			low = mid + 1;
		else if (key < arr[mid])
			top = mid - 1;
		else if (key == arr[mid])
			return (mid);
	}
	return (-1);
}

long long	binarysearch_lower(long long* arr, long long size, long long key)
{
	long long	low = 0;
	long long top = size - 1;
	long long mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key > arr[mid])
			low = mid + 1;
		else
			top = mid - 1;
	}

	return (low);
}


long long	binarysearch_upper(long long* arr, long long size, long long key)
{
	long long	low = 0;
	long long top = size - 1;
	long long mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key < arr[mid])
			top = mid - 1;
		else
			low = mid + 1;
	}
	return (top);
}


int	main(void)
{
	long long* arr;
	long long* set;
	long long n;
	long long	idx = 0;
	long long	max = -1;
	long long temp;

	scanf("%lld", &n);
	arr = (long long*)malloc(sizeof(long long) * n);
	set = (long long*)malloc(sizeof(long long) * n);

	for (long long i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	qsort(arr, n, sizeof(long long), compare);
	for (long long i = 0; i < n; i++)
	{
		if (binarysearch(arr, n, arr[i]) != -1)
			set[idx++] = arr[i];
	}
	for (long long i = 0; i < idx; i++)
	{
		n = binarysearch_upper(set, idx, set[i]) - binarysearch_lower(set, idx, set[i]) + 1;
		if (max < n)
		{
			max = n;
			temp = set[i];
		}
	}
	printf("%lld", temp);
}