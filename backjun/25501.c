#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int recursion(const char* s, int l, int r, int *n) {
    *n += 1;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, n);
}

int isPalindrome(const char* s, int *n) {
    return recursion(s, 0, strlen(s) - 1, n);
}

int main() {
    int n;
    char str[1000];
    int i;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        i = 0;
        scanf("%s", str);
        int c = isPalindrome(str, &i);
        printf("%d %d\n", c, i);
    }
}