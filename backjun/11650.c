#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int* x;
	int* y;
	int temp;

	scanf("%d", &n);
	x = (int*)malloc(sizeof(int) * n);
	y = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j + 1 + i < n; j++)
		{
			if (x[j] == x[j + 1] && y[j] > y[j + 1])
			{
					temp = x[j];
					x[j] = x[j + 1];
					x[j + 1] = temp;
					temp = y[j];
					y[j] = y[j + 1];
					y[j + 1] = temp;
			}
			if (x[j] > x[j + 1])
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
				temp = y[j];
				y[j] = y[j + 1];
				y[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d %d\n", x[i], y[i]);
}