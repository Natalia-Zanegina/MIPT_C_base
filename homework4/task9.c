#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    
    printf(a < b && b < c ? "YES\n" : "NO\n");

    return 0;
}