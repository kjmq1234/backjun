#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	main(void)
{
	
	int	num1, num2;
	long double div;

	scanf("%d %d", &num1, &num2);
	printf("%d.", num1 / num2);
	num1 = num1 % num2;
	for (int i = 0; i < 2000; i++)
	{
		num1 *= 10;
		printf("%d", num1 / num2);
		num1 = num1 - (num1 / num2) * num2;
	}
}
