#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[11];
	int Korean;
	int English;
	int Math;
} student;

int	compare(const void* a, const void* b)
{
	student one = *(student*)a;
	student two = *(student*)b;

	if (one.Korean > two.Korean)
		return (-1);
	else if (one.Korean < two.Korean)
		return (1);
	else if (one.Korean == two.Korean)
		return (compare_2(a, b));
}

int	compare_2(const void* a, const void* b)
{
	student one = *(student*)a;
	student two = *(student*)b;

	if (one.English != two.English)
		return (one.English - two.English);
	else
		return (compare_3(a, b));
}

int	compare_3(const void* a, const void* b)
{
	student one = *(student*)a;
	student two = *(student*)b;

	if (one.Math > two.Math)
		return (-1);
	else if (one.Math < two.Math)
		return (1);
	else if (one.Math == two.Math)
		return (compare_4(a, b));
}

int	compare_4(const void* a, const void* b)
{
	student one = *(student*)a;
	student two = *(student*)b;

	if (strcmp(one.name, two.name) > 0)
		return (1);
	else if (strcmp(one.name, two.name) < 0)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	int	n;
	student* arr;

	scanf("%d", &n);
	arr = malloc(sizeof(student) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &arr[i].name, &arr[i].Korean, &arr[i].English, &arr[i].Math);
	}
	qsort(arr, n, sizeof(student), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", arr[i].name);
	}
}