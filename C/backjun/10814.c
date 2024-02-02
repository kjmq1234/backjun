#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int age;
	int	idx;
	char name[101];
} person;


int	compare(const void* person1, const void* person2)
{
	person one = *(person*)person1;
	person two = *(person*)person2;

	if (one.age != two.age)
		return (one.age - two.age);
	else
	{
		return (one.idx - two.idx);
	}
}

int	main(void)
{
	int	n;
	person* arr;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(person) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &arr[i].age, &arr[i].name);
		arr[i].idx = i;
	}

	qsort(arr, n, sizeof(person), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i].age);
		printf("%s\n", arr[i].name);
	}

}