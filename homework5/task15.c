/*Количество четных чисел
Дана последовательность ненулевых целых чисел, в конце последовательности число 0. 
Посчитать количество четных чисел.*/
#include <stdio.h>

int main(void) {

    int num, count = 0;

    do {
        scanf("%d", &num);
        if (!(num % 2))
            count++;
    } while (num);

    printf("%d\n", count - 1);
    return 0;
}