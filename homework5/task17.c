/*Все счастливые числа
Ввести натуральное число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна 
произведению цифр*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    for (int i = 10; i <= num; i++)
    {
        int sum = 0, mult = 1, n = i;
        while (n > 0) 
        {
            sum += n % 10;
            mult *= n % 10;
            n /= 10;
        }
    
        if (sum == mult)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;

}