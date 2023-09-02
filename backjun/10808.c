#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char str[101];
	int alpha[26] = { 0 };
	int	len;

	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		alpha[str[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}
}
