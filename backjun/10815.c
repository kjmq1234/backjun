#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	binarysearch(int *arr, int size, int key)
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
		else
			return (mid);
	}
	return (-1);
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
		arr[i] = temp;
	}
	qsort(arr, n, sizeof(int), compare);
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &temp);
		if (binarysearch(arr, n, temp) != -1)
			printf("%d ", 1);
		else
			printf("%d ", 0);
		
	}
}