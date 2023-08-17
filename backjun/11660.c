//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(void)
//{
//	int	n;
//	int	m;
//	int* arr;
//	int	sum = 0;
//	int	startx, starty;
//	int	endx, endy;
//	int	temp;
//
//	scanf("%d %d", &n, &m);
//	arr = (int*)malloc(sizeof(int) * (n * n));
//
//	for (int i = 0; i < n * n; i++)
//	{
//		scanf("%d", &temp);
//		sum += temp;
//		arr[i] = sum;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		sum = 0;
//		scanf("%d %d %d %d", &startx, &starty, &endx, &endy);
//		 if (((startx - 1) * n + starty) == 1)
//			sum = arr[(endx - 1) * n + endy - 1];
//		else if ((endx - 1) * n + endy - 1 == (startx - 1) * n + starty - 1)
//			sum = arr[(endx - 1) * n + endy - 1] - arr[((startx - 1) * n + starty - 2)];
//		else
//			sum = arr[(endx - 1) * n + endy - 1] - arr[(startx - 1) * n + starty - 1];
//
//		printf("%d\n", sum);
//	}
//}