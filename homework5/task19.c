/*Сумма цифр равна 10
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.*/
#include <stdio.h>

int main(void) {
    int num, sum = 0;
    scanf("%d", &num);

    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    
    printf(sum == 10 ? "YES\n" : "NO\n");
    return 0;
}