#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	target;
	int* arr;
	int	i;
	int	sum = 0;

	scanf("%d %d", &n, &target);
	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	i--;
	for (i; i >= 0; i--)
	{
		sum += target / arr[i];
		printf("sum : %d", target / arr[i]);
		target -= target / arr[i] * arr[i];
		printf(" target : %d\n", target);
		if (target == 0)
			break;
	}
	printf("%d", sum);
}