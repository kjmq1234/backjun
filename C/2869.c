#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int hei;
	int	up;
	int	down;
	int	day ;

	scanf("%d %d %d", &up, &down, &hei);
	if (hei == up)
		day = 1;
	else if ((hei - up) % (up - down) == 0)
		day = ((hei - up) / (up - down)) + 1;
	else
		day = ((hei - up) / (up - down)) + 2;
	printf("%d", day);
}