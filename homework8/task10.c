/*Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.*/
#include <stdio.h>
#define SIZE 12
#define SHIFT 4

void shiftArray(int array[], int size)
{
    for (int i = 0; i < SHIFT; i++)
    {
        int temp = array[i];
        for (int j = SHIFT; j < size; j += SHIFT)
        {
            int temp2 = array[i + j];
            array[i + j] = temp;
            temp = temp2;
        }
        array[i] = temp;
    }
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    shiftArray(arr, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}