#include <stdio.h>

int main(void) {
    int x, max, a, b, c;
    scanf("%d", &x);
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;

    max = a > b ? a : b;
    max = max > c ? max : c;

    printf("%d\n", max);
    return 0;
}