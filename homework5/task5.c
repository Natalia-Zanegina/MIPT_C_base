/*Сумма цифр
Ввести целое число и найти сумму его цифр.*/
#include <stdio.h>

int main(void) {
    int num, sum = 0;
    scanf("%d", &num);
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    
    printf("%d\n", sum);
    return 0;
}