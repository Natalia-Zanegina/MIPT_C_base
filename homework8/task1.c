/*Среднее арифметическое чисел
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.*/
#include <stdio.h>
#define SIZE 5

float getAverage(int array[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];

    float average = sum / size;

    return average;
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("%.3f\n", getAverage(arr, SIZE));

    return 0;
}