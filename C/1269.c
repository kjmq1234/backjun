#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 != num2)
		return (num1 - num2);
	return (0);
}

int	binarysearch(int* arr, int size, int key)
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
			return (mid);
	}
	return (-1);
}

int	main(void)
{
	int	n, k;
	int* arr1;
	int* arr2;
	int	cnt = 0;

	scanf("%d %d", &n, &k);
	arr1 = (int*)malloc(sizeof(int) * n);
	arr2 = (int*)malloc(sizeof(int) * k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &arr2[i]);
	}
	qsort(arr1, n, sizeof(int), compare);
	qsort(arr2, k, sizeof(int), compare);
	for (int i = 0; i < n; i++)
	{
		if (binarysearch(arr2, k, arr1[i]) == -1)
			cnt++;
	}
	for (int i = 0; i < k; i++)
	{
		if (binarysearch(arr1, n, arr2[i]) == -1)
			cnt++;
	}
	printf("%d", cnt);
	free(arr1);
	free(arr2);
}