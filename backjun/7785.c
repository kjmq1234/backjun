#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[6];
	char state[6];
} person;

int	compare(const void* person1, const void* person2)
{
	person p1 = *(person*)person1;
	person p2 = *(person*)person2;
	if (strcmp(p1.name, p2.name) > 0)
		return (-1);
	else if (strcmp(p1.name, p2.name) < 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	cnt;
	int	n;
	char name[6];
	person *arr;
	char state[6];
	scanf("%d", &n);
	arr = (person*)malloc(sizeof(person) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %s", arr[i].name, arr[i].state);
	}
	qsort(arr, n, sizeof(person), compare);
	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		while (strcmp(arr[i].name, arr[i + 1].name) == 0)
		{
			i++;
			cnt++;
		}
		if (cnt % 2 == 0)
			printf("%s\n", arr[i].name);
	}
}