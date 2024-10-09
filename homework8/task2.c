/*Найти минимум
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.*/ 
#include <stdio.h>
#define SIZE 5

int getMin(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
    }

    return min;
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", getMin(arr, SIZE));

    return 0;
}