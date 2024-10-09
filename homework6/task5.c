/*Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.*/
#include <stdio.h>

int sumOfNumbers(int num) 
{
    int sum = 1;
    for (int i = 2; i <= num; i++)
        sum += i;

    return sum;

}

int main(void) 
{
    int num;
    scanf("%d", &num);
    printf("%d\n", sumOfNumbers(num));
}