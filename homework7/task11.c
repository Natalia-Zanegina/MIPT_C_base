/*Количество двоичных 1
Дано натуральное число N. Посчитать количество «1» в двоичной записи числа. Составить рекурсивную функцию.*/
#include <stdio.h>

int countOf1(int num){

    static int count = 0;
    if (!num)
        return count;  
    else
    {
        if (num % 2)
            count++;
        countOf1(num / 2);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", countOf1(num));
}