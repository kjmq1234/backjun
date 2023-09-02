#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[101];
	int	i = 0;

	scanf("%[^\n]", str);

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] =  (str[i] - 'a' + 13) % 26 + 'a';
		i++;
	}
	printf("%s", str);
}