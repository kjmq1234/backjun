#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int one, two, three;

	scanf("%d %d %d", &one, &two, &three);

	if (one + two + three != 180)
	{
		printf("Error");
		return (0);
	}
	if (one == two && one == three)
		printf("Equilateral");
	else if (one == two || one == three || two == three)
		printf("Isosceles");
	else
		printf("Scalene");
}