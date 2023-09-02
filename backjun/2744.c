#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[101];
    int  i = 0;
    scanf("%s", str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
        printf("%c", str[i++]);
    }


}