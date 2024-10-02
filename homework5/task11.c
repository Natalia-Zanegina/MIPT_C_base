/*Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.*/
#include <stdio.h>

int main(void) {
    int num, result = 0;
    scanf("%d", &num);

    while (num) 
    {
        result *= 10;
        result += num % 10;
        num /= 10;
    }

    printf("%d\n", result);
    return 0;
}