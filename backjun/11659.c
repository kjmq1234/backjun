#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	m;
	int* arr;
	int	sum = 0;
	int	start, end;
	int	temp;

	scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		sum += temp;
		arr[i] = sum;
	}
	for (int i = 0; i < m; i++)
	{
		sum = 0;
		scanf("%d %d", &start, &end);
		if (start != 1)
			sum = arr[end - 1] - arr[start - 2];
		else
			sum = arr[end - 1];
		printf("%d\n", sum);
	}
}