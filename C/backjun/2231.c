#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int n = 0;
	int	target;
	int	sum = 0;
	int	k;

	scanf("%d", &target);

	while (target - sum != n - 1)
	{
		sum = 0;
		k = n++;
		while (k != 0)
		{
			sum += k % 10;
			k = k / 10;
		}
		if (n == target)
		{
			printf("0");
			exit(0);
		}
	}
		printf("%d", n - 1);
}