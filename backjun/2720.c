#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	n;
	int Q = 0;
	int	D = 0;
	int N = 0;
	int	P = 0;
	int	sum;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sum);
		Q = sum / 25;
		D = sum % 25 / 10;
		N = sum % 25 % 10 / 5;
		P = sum % 25 % 10 % 5;
		printf("%d %d %d %d\n", Q, D, N, P);
	}
}