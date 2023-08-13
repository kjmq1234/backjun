#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	pibo(int n)
{
	if (n == 0)
		return (0);
	else if (n <= 2)
		return (1);
	return (pibo(n - 1) + pibo(n - 2));
}

int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d", pibo(n));
}