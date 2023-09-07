#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	is_captial(long long k)
{
	long long	m = 2;
	while (k >= m * m)
	{
		if (k % m == 0)
			return (0);
		m++;
	}
	return (1);
}


int	main(void)
{
	int n;
	long long k;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &k);
		while (1)
		{
			if (is_captial(k))
			{
				if (k <= 1)
					printf("2\n");
				else
					printf("%lld\n", k);
				break;
			}
			else
				k++;
		}
	}
}