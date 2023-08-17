#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	min_search(int num1, int num2, int num3)
{
	if (num1 >= num2 && num3 >= num2)
		return (num2);
	else if (num2 >= num1 && num3 >= num1)
		return (num1);
	else
		return (num3);
}

int	main(void)
{
	int	x, y;
	int** arr;
	int	max = 0;
	char	temp;

	scanf("%d %d", &y, &x);
	arr = (int**)malloc(sizeof(int*) * y);
	for (int i = 0; i < y; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * x);
		for (int j = 0; j < x; j++)
		{
			scanf(" %c", &temp); // 개행문자가 들어오는걸 흘려주기 위함
			arr[i][j] = temp -'0';
		}
	}
	for (int i = 0; i < x; i++)
	{
		if (arr[0][i] != 0 && max == 0)
			max = 1;
	}
	for (int i = 0; i < y; i++)
	{
		if (arr[i][0] != 0 && max == 0)
			max = 1;
	}
	for (int i = 1; i < y; i++)
	{
		for (int j = 1; j < x; j++)
		{

			if (arr[i][j] > 0)
				arr[i][j] = (min_search(arr[i][j - 1], arr[i - 1][j], arr[i - 1][j - 1]) + 1);
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	printf("%d", max * max);
}