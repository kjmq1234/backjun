#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int n;
	int	i;

	i = 1;
	scanf("%d", & n);
	n--;

	while (n > 0)
	{
		n -= 6 * i;
		i++;
	}
	printf("%d", i);
}