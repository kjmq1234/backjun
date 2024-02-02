#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int   main(void)
{
    char soo[15];
    unsigned long long sum = 0;
    char temp[8];
    int   i = 0;

    for (int k = 0; k < 2; k++)
    {
        soo[0] = '\0';
        for (int j = 0; j < 2; j++)
        {
            scanf("%s", temp);
            strcat(soo, temp);
        }
        sum += atoll(soo);
    }
    printf("%llu", sum);
}