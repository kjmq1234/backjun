#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int	compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	return (num1 - num2);
}

int	binarysearch(int* arr, int size, int target)
{
	int	low = 0;
	int high = size - 1;
	int	mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (target < arr[mid])
			high = mid - 1;
		else if (target > arr[mid])
			low = mid + 1;
		else if (arr[mid] == target)
			return (mid);
	}
	return (-1);
}

int	main(void)
{
	int	n;
	int* arr;
	int	idx = 0;
	int* real;
	int* arr_sort;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	arr_sort = (int*)malloc(sizeof(int) * n);
	real = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		arr_sort[i] = arr[i];
	}
	qsort(arr_sort, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || arr_sort[i] != arr_sort[i - 1])
			real[idx++] = arr_sort[i];
	}
	//printf("%d\n", idx);
	//for (int i = 0; i < idx; i++)
	//	printf("%d\n", real[i]);
	for (int i = 0; i < n; i++)
		printf("%d ", binarysearch(real, idx, arr[i]));
}