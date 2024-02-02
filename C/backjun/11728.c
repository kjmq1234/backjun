#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 != num2)
		return (num1 - num2);
	return (0);
}

int	main(void)
{
	int	n, m;
	int* arr;

	scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * (n + m));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = n; i < n + m; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n + m, sizeof(int), compare);
	for (int i = 0; i < n + m; i++)
		printf("%d ", arr[i]);
}