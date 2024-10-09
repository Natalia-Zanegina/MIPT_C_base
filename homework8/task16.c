/*Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, 
что такое число ровно 1.*/
#include <stdio.h>
#define SIZE 10

int mostFreqNumber(int array[], int size)
{
    int count1 = 0, count2, num = -1;
    for (int i = 0; i < size-1; i++)
    {
        count2 = 0;
        for (int j = i+1; j < size; j++)
        {
            if (array[i] == array[j])
                count2++;
        }
        
        if (count2 > count1)
        {
            count1 = count2;
            num = array[i];
        }   
    }
    return num;
    
}

int main(void)
{
    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", mostFreqNumber(arr, SIZE));

    return 0;
}