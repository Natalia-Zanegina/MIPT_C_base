/*Наибольший общий делитель
Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. 
Найти наибольший общий делитель.*/
#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    
    while (b) 
    {
        int temp2 = b;
        b = a % b;
        a = temp2;
    }
    
    printf("%d\n", a);
    return 0;
}