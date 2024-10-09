/*Возвести в степень
Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.*/
#include <stdio.h>

int power(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
        result *= n;

    return result;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", power(a, b));
    return 0;
}
