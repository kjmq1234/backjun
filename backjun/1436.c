#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	n;
	int	cnt = 0;
	int	i = 666;
	int	k;

	scanf("%d", &n);
	while (cnt != n)
	{
		k = i++;
		while (k != 0)
		{
			if (k % 1000 == 666)
			{
				cnt++;
				break;
			}
			k /= 10;
		}
	}
	printf("%d", i - 1);
}