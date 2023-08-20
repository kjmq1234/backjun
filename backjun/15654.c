//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int	valid(int current, int* buf, int i)
//{
//	for (int n = 0; n < current; n++)
//	{
//		if (buf[n] > i)
//			return (0);
//	}
//	return (1);
//}
//
//void	recursive(int count, int depth, int current, int* buf, int *arr)
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
//		for (int i = 1; i <= count; i++)
//		{
//			if (valid(current, buf, i))
//			{
//				buf[current] = i;
//				recursive(count, depth, current + 1, buf, arr);
//			}
//		}
//	}
//}
//
//int	main(void)
//{
//	int	count;
//	int	depth;
//	int	buf[7];
//
//	scanf("%d %d", &count, &depth);
//	recursive(count, depth, 0, buf);
//}