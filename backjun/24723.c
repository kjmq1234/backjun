#include <stdio.h>

int	main(void)
{
    int	n;
    int sum = 2;

    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        sum *= 2;
    }
    printf("%d", sum);
}