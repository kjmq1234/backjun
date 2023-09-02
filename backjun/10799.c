#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	int	current = 0, entire = 0;
	int	i = 0;
	char str[100001];

	scanf("%s", str);
	while (str[i] != '\0')
	{
		if (str[i] == ')')
			current--;
		else if (str[i] == '(' && str[i + 1] == ')')
		{
			entire += current;
			i++;
		}
		else if (str[i] == '(')
		{
			current++;
			entire++;
		}
		i++;
	}
	printf("%d", entire);
}