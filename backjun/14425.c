#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	binarysearch(char** arr, int size, char* key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (strcmp(key ,arr[mid]) > 0)
			low = mid + 1;
		else if (strcmp(key, arr[mid]) < 0)
			top = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

int	compare(const void* a, const void* b)
{
	char*	str1 = *(char**)a;
	char*	str2 = *(char**)b;

	if (strcmp(str1, str2) > 0)
		return (1);
	else if (strcmp(str1, str2) < 0)
		return (-1);
	else
		return(0);
}

int	main(void)
{
	int		n;
	char**	arr;
	char*	temp[501];
	int		k;
	int		sum = 0;

	scanf("%d %d", &n, &k);
	arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", temp);
		arr[i] = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
		strcpy(arr[i], temp);
	}
	qsort(arr, n, sizeof(char*), compare);
	for (int i = 0; i < k; i++)
	{
		scanf("%s", temp);
		if (binarysearch(arr, n, temp) != -1)
			sum++;
	}
	printf("%d", sum);
}