#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pac(long long n)
{
	if (n > 1)
		return (pac(n - 1) * n);
	else if (n >= 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	n;
	
	scanf("%d", &n);
	printf("%lld", pac(n));
}