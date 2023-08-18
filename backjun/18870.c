//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int	compare(const void* a, const void* b)
//{
//	int num1 = *(int*)a;
//	int num2 = *(int*)b;
//
//	return (num1 - num2);
//}
//
//int	main(void)
//{
//	int	n;
//	int* arr;
//	int	idx = 0;
//	int* real;
//
//	scanf("%d", &n);
//	arr = (int*)malloc(sizeof(int) * n);
//	real = (int*)malloc(sizeof(int) * n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (real)
//		real[idx++] = arr[i];
//	}
//	qsort(arr, n, sizeof(int), compare);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (real[i] == arr[j])
//			{
//				printf("%d ", j);
//				break;
//			}
//		}
//	}
//
//}