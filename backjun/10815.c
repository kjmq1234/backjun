#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	check(int *arr, int	n)
{
	int	i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	n;
	int* arr;
	int	temp;
	int	k;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[i] = temp;
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &temp);
		if (check(arr, temp))
			printf("%d ", 1);
		else
			printf("%d ", 0);
		
	}
}