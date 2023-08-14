#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int one, two, three;

	scanf("%d %d %d", &one, &two, &three);
	if (one >= two + three)
		printf("%d", 2 * (two + three) - 1);
	else if (two >= one + three)
		printf("%d", 2 * (one + three) - 1);
	else if (three >= two + one)
		printf("%d", 2 * (two + one) - 1);
	else
		printf("%d", one + two + three);
}