//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int	compare(const void* a, const void* b)
//{
//	int num1 = *(int*)a;
//	int num2 = *(int*)b;
//	if (num1 != num2)
//		return (num1 - num2);
//	return (0);
//}
//
//int	valid(int current, int* buf, int i, int k)
//{
//	for (int n = 0; n < current; n++)
//	{
//		if (i == k || buf[n] > i)
//			return (0);
//	}
//	return (1);
//}
//
//void	recursive(int count, int depth, int current, int* buf, int* soo)
//{
//	if (current == depth)
//	{
//		int	j = 0;
//		for (j; j < depth - 1; j++)
//			printf("%d ", buf[j]);
//		printf("%d", buf[j]);
//		printf("\n");
//	}
//	else
//	{
//		for (int i = 0; i < count; i++)
//		{
//			if (valid(current, buf, soo[i], soo[i - 1]) || i == 0)
//			{
//				buf[current] = soo[i];
//				recursive(count, depth, current + 1, buf, soo);
//			}
//		}
//	}
//}
//
//int	main(void)
//{
//	int	count;
//	int	depth;
//	int idx = 0;
//	int	buf[7];
//	int* soo;
//	int* real;
//
//	scanf("%d %d", &count, &depth);
//	soo = (int*)malloc(sizeof(int) * count);
//	real = (int*)malloc(sizeof(int) * count);
//	for (int i = 0; i < count; i++)
//		scanf("%d", &soo[i]);
//	qsort(soo, count, sizeof(int), compare);
//	for (int i = 0; i < count; i++)
//	{
//		if (soo[i] != soo[i - 1])
//		{
//			real[idx++] = soo[i];
//		}
//	}
//	for (int i = 0; i < idx; i++)
//	{
//		buf[0] = real[i];
//		recursive(count, depth, 1, buf, soo);
//		buf[0] = 0;
//	}
//}