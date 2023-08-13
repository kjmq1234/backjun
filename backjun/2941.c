#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	is_alpha(char* str)
{
	if (strncmp(str, "c=", 2) == 0 || strncmp(str, "c-", 2) == 0 || strncmp(str, "d-", 2) == 0 ||
		strncmp(str, "lj", 2) == 0 || strncmp(str, "nj", 2) == 0 || strncmp(str, "s=", 2) == 0 ||
		strncmp(str, "z=", 2) == 0)
		return (2);
	else if (strncmp(str, "dz=", 3) == 0)
		return (3);
	else
		return (1);
}

int	main(void)
{
	char* arr;
	int		n;
	int		i;

	n = 0;
	arr = (char*)malloc(sizeof(char) * (101));
	scanf("%s", arr);
	while (*arr != '\0')
	{
		i = is_alpha(arr);
		arr += i;
		n++;
	}
	printf("%d", n);
}