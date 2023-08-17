#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	long long* length;
	long long* price;
	long long	sum = 0;
	long long	min = 1000000001;

	scanf("%d", &n);
	length = (long long*)malloc(sizeof(long long) * n - 1);
	price = (long long*)malloc(sizeof(long long) * n);

	for (int i = 0; i < n - 1; i++)
		scanf("%d", &length[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &price[i]);
	//sum = length[0] * price[0];
	//min = price[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (price[i] < min)
			min = price[i];
		sum += min * length[i];
	}
	printf("%lld", sum);
}