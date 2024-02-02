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
	int start, end;

	scanf("%d %d", &start, &end);
	for (int i = start; i <= end; i++)
	{
		if (is_captial(i))
		{
			if (i <= 1)
				;
			else
				printf("%d\n", i);
		}
	}
}