/*Наименьшая и наибольшая цифра
Организовать ввод натурального числа с клавиатуры. Программа должна определить наименьшую и наибольшую цифры, 
которые входят в состав данного натурального числа.*/
#include <stdio.h>

int main(void) {
    int num, min, max;
    scanf("%d", &num);

    min = max = num % 10;
    while (num) 
    {
        int digit = num % 10;
        min = min < digit ? min : digit;
        max = max > digit ? max : digit;
        num /= 10;
    }
    
    printf("%d %d\n", min, max);
    return 0;
}