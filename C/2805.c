#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long	total_cnt(int* arr, int len, int size)
{
	 long long total = 0;

	 for (int i = 0; i < size; i++)
	 {
		 if (arr[i] - len > 0)
			 total += arr[i] - len;
	 }
	return (total);
}

int	binarysearch(int* arr, int size, long long top, int key)
{
	long long	low = 0;
	long long mid;
	long long total;

	while (low <= top)
	{
		mid = (low + top) / 2;
		total = total_cnt(arr, mid, size);
		if (key > total)
			top = mid - 1;
		else
			low = mid + 1;
	}
	return (top);
}

int	main(void)
{
	int own, need;
	int* len;
	int max = -1;

	scanf("%d %d", &own, &need);
	len = (int*)malloc(sizeof(int) * own);
	for (int i = 0; i < own; i++)
	{
		scanf("%d", &len[i]);
		if (len[i] > max)
			max = len[i];
	}
	printf("%d", binarysearch(len, own, max, need));

}