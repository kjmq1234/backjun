#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	result = 1;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		result = result * n--;
	}
	for (int i = 0; i < m; m--)
	{
		result = result / m;
	}
	printf("%d", result);
}