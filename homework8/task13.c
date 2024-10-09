/*Вторая с конца ноль
Считать массив из 10 элементов и отобрать в другой массив все числа, у которых 
вторая с конца цифра (число десятков) – ноль.*/
#include <stdio.h>
#define SIZE 10

void secondZero(int array[], int size)
{
    int result[SIZE] = {0};
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if ((!((array[i] % 100) / 10)) || (array[i] == 0))
        {
            result[j] = array[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    secondZero(arr, SIZE);

    return 0;
}