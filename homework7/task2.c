/*Сумма чисел от 1 до N
Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N */
#include <stdio.h>

int sumFrom1ToN(int num){

    static int sum = 0;

    if (num <= 0)
        return sum;    
    else
    {
        sumFrom1ToN(num - 1);
        sum += num; 
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", sumFrom1ToN(num));
}