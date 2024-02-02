#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	n;
	int* arr;
	int temp;

	scanf("%d", &n);
	for (int k = 0; k < n; k++)
	{
		arr = (int*)malloc(sizeof(int) * 10);
		for (int i = 0; i < 10; i++)
			scanf("%d", &arr[i]);
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j + 1 + i < 10; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		printf("%d\n", arr[7]);
	}
}