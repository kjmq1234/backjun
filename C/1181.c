#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int len;
	char word[51];
} word;

int compare(const void* a, const void* b) {
	word word1 = *(word*)a;
	word word2 = *(word*)b;

	if (word1.len != word2.len)
		return (word1.len - word2.len);
	else
		return (strcmp(word1.word, word2.word));
}

int	main(void)
{
	int	n;
	word* arr;

	scanf("%d", &n);
	arr = (word*)malloc(sizeof(word) * (n));
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr[i].word);
		arr[i].len = strlen(arr[i].word);
	}
	qsort(arr, n, sizeof(word), compare);
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%s\n", arr[i].word);
		}
		else
		{
			if (compare(&arr[i], &arr[i - 1]) != 0)
				printf("%s\n", arr[i].word);
		}
	}
}