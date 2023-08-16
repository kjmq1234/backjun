#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char arr[37];
	int	n;
	int	len;
	long long	total = 0;

	scanf("%s %d", arr, &n);

	len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
			total = total * n + (arr[i] - '0');
		else
			total = total * n + (arr[i] - 'A' + 10);
	}
	printf("%lld", total);
}