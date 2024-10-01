#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    
    printf(a + b > c && a + c > b && b + c > a ? "YES\n" : "NO\n");
    
    return 0;
}