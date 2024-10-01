#include <stdio.h>

int main(void) {
    int a, b, min, max;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    
    printf("%d %d\n", min, max);

    return 0;
}