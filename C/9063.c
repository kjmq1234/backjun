#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int	n;
	int	minx = 10001, miny = 10001;
	int	maxx = -10001, maxy = -10001;
	int	x, y;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x > maxx)
			maxx = x;
		if (x < minx)
			minx = x;
		if (y > maxy)
			maxy = y;
		if (y < miny)
			miny = y;
	}
	printf("%lld", (maxx - minx) * (maxy - miny));
}