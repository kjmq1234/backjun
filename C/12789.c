#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int* arr;
	int* stack;
	int	num = 1;
	int	idx = -1;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	stack = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		while (num == stack[idx])
		{
			num++;
			idx--;
		}
		if (arr[i] == num)
			num++;
		else
			stack[++idx] = arr[i];
	}
	for (int i = idx; idx >= 0; idx--)
	{
		if (stack[idx] == num)
			num++;
		else
		{
			printf("Sad");
			break;
		}
	}
	if (num - 1 == n)
		printf("Nice");
}