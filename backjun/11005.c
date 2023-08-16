#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int		n;
	int		b;
	char	arr[32];
	int		i = 0;

	scanf("%d %d", &n, &b);

	while (n > 0)
	{
		if (n % b < 10)
			arr[i] = n % b + '0';
		else
			arr[i] = n % b + 'A' - 10;
		n /= b;
		i++;
	}
	i--;
	while (i >= 0)
		printf("%c", arr[i--]);
}