#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int* arr;
	int	sum = 0;
	int	temp;
	
	arr = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j + 1 + i < 5; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("%d\n%d", sum / 5, arr[2]);
}