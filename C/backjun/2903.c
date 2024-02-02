#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	n;
	int	line = 3;
	int dot = 1;

	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d", 9);
		return (0);
	}
	for (int i = 1; i < n; i++)
	{
		dot *= 2;
		line += dot;
	}
	printf("%d", line * line);
}