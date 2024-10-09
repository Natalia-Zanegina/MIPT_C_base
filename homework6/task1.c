/*Модуль числа
Составить функцию, модуль числа и привести пример ее использования.*/
#include <stdio.h>

int abs(int num)
{
    return num < 0 ? -num : num;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", abs(a));
    return 0;
}
