#include <stdio.h>

int nod(int a, int b)
{
    while (a % b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b; 
}

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", nod(a, b));
}