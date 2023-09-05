#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	binarysearch_lower(int* arr, int size, int key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

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


int	binarysearch_upper(int* arr, int size, int key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

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
int	compare(const void* a, const void* b)
{
	int	num1 = *(int*)a;
	int	num2 = *(int*)b;

	return (num1 - num2);
}

int	main(void)
{
	int	n;
	int* arr;
	int	temp;
	int	k;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[i]= temp;
	}
	qsort(arr, n, sizeof(int), compare);

	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &temp);
		printf("%d ", binarysearch_upper(arr, n, temp) - binarysearch_lower(arr, n, temp) + 1);

	}
}