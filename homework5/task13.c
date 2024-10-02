/*Количество четных и нечетных цифр
Посчитать количество четных и нечетных цифр числа.*/
#include <stdio.h>

int main(void) {
    int num, countOfEven = 0, countOfOdd = 0;
    scanf("%d", &num);

    while (num) 
    {
        if (num % 2)
            countOfOdd++;
        else
            countOfEven++;
        
        num /= 10;
    }
    printf("%d %d\n", countOfEven, countOfOdd);
    return 0;
}