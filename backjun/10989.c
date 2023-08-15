#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	main(void)
{
	int	n;
	int arr[10001] = { 0 };
	int temp;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;
	}

	for (int j = 1; j < 10001; j++)
	{
		for (int i = 0; i < arr[j]; i++)
		{
			printf("%d\n", j);
		}
	}
}