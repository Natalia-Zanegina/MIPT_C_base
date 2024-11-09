/* Поменять местами
Составить только функцию которая в массиве находит максимальный из отрицательных элементов и меняет его местами 
с последним элементом массива. Гарантируется, что в массиве только один такой элемент или же такой элемент 
отсутствует. Если отрицательных элементов нет - массив не менять.
Прототип функции: void swap_negmax_last(int size, int a[])*/
// #include <stdio.h>
// #define SIZE 10

void swap_negmax_last(int size, int a[])
{
    int negmax = 0, index_negmax = -1;
    for(int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            if (!negmax)
            {
                negmax = a[i];
                index_negmax = i;
            }

            if (a[i] > negmax)
            {
                negmax = a[i];
                index_negmax = i;
            }
        }
    }
    
    if (index_negmax >= 0)
    {   
        int temp = a[index_negmax];
        a[index_negmax] = a[size - 1];
        a[size - 1] = temp;
    } 
}

// int main(void){
//     // int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     // int arr[] = {1, 0, 1, 0, 1};
//     // int arr[] = {20, 11, 25, 5, -48, -15, -16, 27, 43, -22, -1, -39, -16, -28, 28, -31, -36, 17, 17, -39, -50};
//     // int arr[] = {20, 20, 19, 18, 17, 16, 15, -14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     int arr[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
//     // for (int i = 0; i < SIZE; i++)
//     //     printf("%d ", arr[i]);

//     // printf("\n");
//     swap_negmax_last(SIZE, arr);
//     for (int i = 0; i < SIZE; i++)
//         printf("%d ", arr[i]);

//     printf("\n");
//     return 0;
// }