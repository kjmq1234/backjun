#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	n;
	int	i = 0;

	scanf("%d", &n);
	
	while (n - i > 0)
	{
		n =  n - i++;
	}
	i++;
	if (i % 2 == 0)
		printf("%d/%d", i - n, n);
	else
		printf("%d/%d", n , i - n);
}