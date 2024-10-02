/*Посчитать числа
Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество чисел.*/
#include <stdio.h>

int main(void) {

    int num, count = 0;

    do {
        scanf("%d", &num);
        count++;
    } while (num);

    printf("%d\n", count - 1);
    return 0;
}