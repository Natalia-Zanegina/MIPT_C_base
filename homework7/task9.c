/*Сумма цифр числа
Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
int sum_digits(int n)*/
#include <stdio.h>

int sum_digits(int n)
{
    static int sum = 0;
    if (n <= 0)
        return sum;    
    else
    {
        sum += n % 10;
        sum_digits(n / 10);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", sum_digits(num));
}