//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	int	value;
//	int	cnt;
//} card;
//
//int	binarysearch(int* arr, int size, int key)
//{
//	int	low = 0;
//	int top = size - 1;
//	int mid;
//
//	while (low <= top)
//	{
//		mid = (low + top) / 2;
//		if (key > arr[mid])
//		{
//			low = mid + 1;
//		if (key < arr[mid])
//			top = mid - 1;
//
//	}
//	return (-1);
//}
//
//int	compare(const void* a, const void* b)
//{
//	card	num1 = *(card*)a;
//	card	num2 = *(card*)b;
//
//	return (num1.value - num2.value);
//}
//
//int	main(void)
//{
//	int	n;
//	card* arr;
//	int	temp;
//	int	k;
//
//	scanf("%d", &n);
//	arr = (card*)malloc(sizeof(card) * n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &temp);
//		arr[i].value = temp;
//		arr[i].cnt = 1;
//	}
//	qsort(arr, n, sizeof(card), compare);
//
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d", &temp);
//			printf("%d ", binarysearch(arr, n, temp));
//
//	}
//}