#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int	x;
	int	y;
} dot;

int	compare(const void* a, const void* b)
{
	dot one = *(dot*)a;
	dot two = *(dot*)b;

	if (one.y == two.y)
		return (one.x - two.x);
	else
		return (one.y - two.y);
}

int	main(void)
{
	int	n;
	dot* arr;

	scanf("%d", &n);
	arr = (dot*)malloc(sizeof(dot) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	qsort(arr, n, sizeof(dot), compare);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
}