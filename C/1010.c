#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long	fact(int m, int n)
{
	long long temp = 1;
	if (n > m - n)
		n = m - n;
	for (int i = 0; i < n; i++)
	{
		temp *= (m - i);
		temp /= 1 + i;
	}
	
	return (temp);
}

int	main(void)
{
	int	cnt;
	int	n;
	int	m;
	long long	result = 1;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		result = 1;
		scanf("%d %d", &n, &m);
		result = fact(m, n) ;
		printf("%lld\n", result);
	}
}