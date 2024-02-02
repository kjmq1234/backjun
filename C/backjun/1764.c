#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare(const void* a, const void* b)
{
	char* one = *(char**)a;
	char* two = *(char**)b;

	if (strcmp(one, two) > 0)
		return (1);
	else if (strcmp(one, two) < 0)
		return (-1);
	else
		return (0);
}

int	binarysearch(char** arr, int size, char* key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (strcmp(key, arr[mid]) > 0)
			low = mid + 1;
		else if (strcmp(key, arr[mid]) < 0)
			top = mid - 1;
		else if (strcmp(key, arr[mid]) == 0)
			return (mid);
	}
	return (-1);
}

int	main(void)
{
	int	n, k;
	int	idx = 0;
	char** bj;
	char** dj;
	char** dbj;

	scanf("%d %d", &n, &k);
	bj = (char**)malloc(sizeof(char*) * n);
	dj = (char**)malloc(sizeof(char*) * k);
	if (n >= k)
		dbj = (char**)malloc(sizeof(char*) * k);
	else
		dbj = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++)
	{
		bj[i] = (char*)malloc(sizeof(char) * (21));
		scanf("%s", bj[i]);
	}
	for (int i = 0; i < k; i++)
	{
		dj[i] = (char*)malloc(sizeof(char) * (21));
		scanf("%s", dj[i]);
	}

	//for (int i = 0; i < n; i++)
	//{
	//	printf("%s\n", dj[i]);
	//}

	qsort(dj, k, sizeof(char*), compare);
	qsort(bj, n, sizeof(char*), compare);
	if (n >= k)
	{
		for (int i = 0; i < k; i++)
		{

			if (binarysearch(bj, n, dj[i]) != -1)
			{
				dbj[idx] = (char*)malloc(sizeof(char) * 21);
				strcpy(dbj[idx++], dj[i]);
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{

			if (binarysearch(dj, k, bj[i]) != -1)
			{
				dbj[idx] = (char*)malloc(sizeof(char) * 21);
				strcpy(dbj[idx++], bj[i]);
			}
		}
	}
	qsort(dbj, idx, sizeof(char*), compare);
	printf("%d\n", idx);
	for (int i = 0; i < idx; i++)
		printf("%s\n", dbj[i]);
}