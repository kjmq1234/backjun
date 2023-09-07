#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2)
		return (1);
	else if (num1 < num2)
		return (-1);
	else
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
	int	n, num1, num2;
	int* note1;
	int* note2;

	scanf("%d", &n);
	for (int k = 0; k < n; k++)
	{
		scanf("%d", &num1);
		note1 = (int*)malloc(sizeof(int) * num1);
		for (int i = 0; i < num1; i++)
			scanf("%d", &note1[i]);
		scanf("%d", &num2);
		note2 = (int*)malloc(sizeof(int) * num2);
		for (int i = 0; i < num2; i++)
			scanf("%d", &note2[i]);
		qsort(note1, num1, sizeof(int), compare);
		for (int i = 0; i < num2; i++)
		{
			if (binarysearch(note1, num1, note2[i]) != -1)
				printf("1\n");
			else
				printf("0\n");
		}
	}
}