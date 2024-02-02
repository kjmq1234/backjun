#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[21];
	int index;
} poketmon;

int	ft_atoi(char* num)
{
	int	int_num = 0;
	int	i = strlen(num);
	for (int j = 0; j < i; j++)
	{
		int_num = int_num * 10 + (num[j] - '0');
	}
	return (int_num);
}

int	binarysearch(poketmon* arr, int size, char* key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (strcmp(key, arr[mid].name) > 0)
			low = mid + 1;
		else if (strcmp(key, arr[mid].name) < 0)
			top = mid - 1;
		else if (strcmp(key, arr[mid].name) == 0)
			return (mid);
	}
		return (-1);
}

int	compare(const void* a, const void* b)
{
	poketmon one = *(poketmon*)a;
	poketmon two = *(poketmon*)b;

	if (strcmp(one.name, two.name) > 0)
		return (1);
	else if (strcmp(one.name, two.name) < 0)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	int	n, k;
	poketmon* dict;
	poketmon* dict_sort;
	char temp[21];

	scanf("%d %d", &n, &k);
	dict = (poketmon*)malloc(sizeof(poketmon) * n);
	dict_sort = (poketmon*)malloc(sizeof(poketmon) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", dict[i].name);
		dict[i].index = i + 1;
		strcpy(dict_sort[i].name, dict[i].name);
		dict_sort[i].index = dict[i].index;
	}
	qsort(dict_sort, n, sizeof(poketmon), compare);
	for (int i = 0; i < k; i++)
	{
		scanf("%s", temp);
		if (temp[0] >= '0' && temp[0] <= '9')
			printf("%s\n", dict[ft_atoi(temp) - 1].name);
		else
			printf("%d\n", dict_sort[binarysearch(dict_sort, n, temp)].index);
	}
	
}