/*Проверка на простоту
Дано натуральное число n ≥ 1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое или NO в противном случае . Необходимо составить рекурсивную функцию и использовать ее.
int is_prime(int n, int delitel)*/
#include <stdio.h>

int is_prime(int n, int delitel)
{   
    static int steps = 0;
    if (n == 1 && !steps)
        return 0;

    if (n < delitel*delitel)
        return 1;    
    else
    {
        steps++;
        if (n % delitel)
            is_prime(n, delitel + 1);
        else
            return 0;
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf(is_prime(num, 2) ? "YES\n" : "NO\n");
}