#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	int	n;
	char** arr;
	char tmp[51];
	char* temp = 0;

	scanf("%d", &n);
	arr = (char**)malloc(sizeof(char*) * (n + 1));
	for (int i = 0; i < n; i++)
	{
		scanf("%s", tmp);
		arr[i] = (char*)malloc(sizeof(char) * strlen(tmp) + 1);
		strcpy(arr[i], tmp);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j + 1 + i < n; j++)
		{
			if (strlen(arr[j]) > strlen(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			else if (strcmp(arr[j], arr[j + 1]) > 0 && strlen(arr[j]) == strlen(arr[j + 1]))
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%s\n", arr[i]);
		}
		else
		{
			if (strcmp(arr[i - 1], arr[i]) != 0)
				printf("%s\n", arr[i]);
		}
	}
}