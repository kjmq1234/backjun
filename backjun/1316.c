#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int	check(int* alpha)
{
	for (int k = 0; k < 27; k++)
	{
		if (alpha[k] == 1)
			return (0);
	}
	return (1);
}

int	main(void)
{
	int		n;
	char	arr[101];
	char	alpha[27];
	scanf("%d", &n);

	int		sum = n;
	for (int i = 0; i < n; i++)
	{
		for (int n = 0; n < 27; n++)
			alpha[n] = 0;
		scanf("%s", arr);
		alpha[arr[0] - 'a'] = 1;
		for (int j = 1; j < strlen(arr); j++)
		{
			if ((arr[j - 1] != arr[j]) && alpha[arr[j] - 'a'] == 1)
			{
				sum--;
				break;
			}
			else if ((arr[j - 1] == arr[j]) && alpha[arr[j] - 'a'] == 1)
				alpha[arr[j] - 'a'] = 1;
			else
				alpha[arr[j] - 'a'] = 1;

		}
	}
	printf("%d", sum);
}