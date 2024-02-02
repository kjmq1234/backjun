#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
long long factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
*/
int	main(void)
{
	int	n;
//	int	cnt = 0;
//	long long	fac;

	scanf("%d", &n);
	/*
	fac = factorial(n);
	while (fac % 10 == 0)
	{
			cnt++;
			fac /= 10;
	}
	*/
	printf("%d", n / 5 + n /25 + n / 125);
}