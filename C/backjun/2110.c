#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
//int	compare(const void* a, const void* b)
//{
//	int num1 = *(int*)a;
//	int num2 = *(int*)b;
//	if (num1 > num2)
//		return (1);
//	else if (num1 < num2)
//		return (-1);
//	else
//		return (0);
//}
//
//int	main(void)
//{
//	int* map;
//	int home, wifi;
//	
//	scanf("%d %d", &home, &wifi);
//	map = (int*)malloc(sizeof(int) * home);
//	for (int i = 0; i < home; i++)
//		scanf("%d", &map[i]);
//	qsort(map, home, sizeof(int), compare);
//	for (int i = 0; i < home - 1; i++)
//		map[i] = map[i + 1] - map[i];
//	qsort(map, home, sizeof(int), compare);
//	printf("%d", map[home - wifi]);
//}