#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int n;
	int	five = 0;
	int three = 0;
	scanf("%d", &n);

	while (n > 0)
	{
		if (n % 5 == 0)
		{
			printf("%d", three + n / 5);
			return (0);
		}
		three++;
		n -= 3;
	}
	if (n == 0)
	{
		printf("%d", three);
		return (0);
	}
		printf("%d", -1);
}