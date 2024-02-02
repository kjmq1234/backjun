#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int* length;
	int* price;
	long long	sum = 0;
	long long	min = 1000000001;

	scanf("%d", &n);
	length = (int*)malloc(sizeof(int) * n - 1);
	price = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n - 1; i++)
		scanf("%d", &length[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &price[i]);
	for (int i = 0; i < n - 1; i++)
	{
		if (price[i] < min)
			min = price[i];
		sum += min * length[i];
	}
	printf("%lld", sum);
}