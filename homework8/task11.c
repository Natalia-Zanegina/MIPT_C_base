/*Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре.*/
#include <stdio.h>
#define SIZE 10

int getMinIndex(int array[], int size)
{
    int min = array[0] % 10, min_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] % 10 < min)
        {
            min = array[i] % 10;
            min_index = i;
        }
    }

    return min_index;
}

void sortByLastDigit(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_index = getMinIndex(array + i, size - i);
        int temp = array[i];
        array[i] = array[min_index + i];
        array[min_index + i] = temp;
    }
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    int *pa;
    pa = arr;

    sortByLastDigit(pa, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", pa[i]);

    printf("\n");

    return 0;
}