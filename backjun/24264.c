#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	long long	sum = 0;
	int	n;

	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum++;
		}
	}
		printf("%lld\n2", sum);
}