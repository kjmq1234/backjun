#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int	x;
	int	y;
	int	n;
} fx;

int	main(void)
{
	fx one;
	fx two;
	int	x = 999;
	int	y = 999;

	scanf("%d %d %d %d %d %d", &one.x, &one.y, &one.n, &two.x, &two.y, &two.n);
	while (one.x * x + one.y * y != one.n || two.x * x + two.y * y != two.n)
	{
		x--;
		if (x == -1000)
		{
			x = 999;
			y--;
		}
	}
	printf("%d %d", x, y);
}