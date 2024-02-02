#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	one, two, three;

	while (1)
	{
		scanf("%d %d %d", &one, &two, &three);
		if (one == 0 && two == 0 && three == 0)
			break;
		if (one >= two + three || two >= one + three || three >= one + two)
			printf("Invalid");
		else if (one == two && two == three)
			printf("Equilateral");
		else if (one == two || two == three || one == three)
			printf("Isosceles");
		else
			printf("Scalene");
		printf("\n");
	}
}