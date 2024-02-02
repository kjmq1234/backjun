#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(long long ten_base, int base2)
{
	if (ten_base != 0)
	{
		print(ten_base / base2, base2);
		printf("%d ", ten_base % base2);
	}
}

int	main(void)
{
	int	base1, base2;
	int	n;
	long long	ten_base = 0;
	int	sum;
	int	temp;
	long long	tmp;

	scanf("%d %d", &base1, &base2);
	scanf("%d", &n);
	sum = n;
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &tmp);
		for (int j = 1; j < sum; j++)
		{
			tmp *= base1;
		}
		sum--;
		ten_base += tmp;
	}
	print(ten_base, base2);
}