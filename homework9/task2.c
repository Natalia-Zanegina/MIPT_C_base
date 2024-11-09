/*Четные в начало
Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])*/
#include <stdio.h>

// #define SIZE 20
// #define SIZE 5

void sort_even_odd(int n, int a[]);

// int main(void){
//     // int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     // int arr[] = {1, 0, 1, 0, 1};
//     // int arr[] = {20, 11, 25, 5, -48, -15, -16, 27, 43, -22, -1, -39, -16, -28, 28, -31, -36, 17, 17, -39, -50};
//     int arr[] = {20, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     for (int i = 0; i < SIZE; i++)
//         printf("%d ", arr[i]);

//     sort_even_odd(SIZE, arr);
//     for (int i = 0; i < SIZE; i++)
//         printf("%d ", arr[i]);

//     printf("\n");
//     return 0;
// }

void sort_even_odd(int n, int a[])
{
    // int elements = n;
  
    // for (int i = 0; i < n && elements > 0; i++)
    // {
    //     elements--;
    //     if (a[i] % 2)
    //     {
    //         int temp = a[i];
    //         for (int j = i; j < n - 1; j++)
    //             a[j] = a[j + 1];
            
    //         a[n-1] = temp;
    //         elements--;    
    //     } 
    int elements = n;
    for (int i = 0; i < n && elements; i++)
    {
        elements--;
        if (a[i] % 2)
        {
            int temp = a[i];

            for (int j = i; j < n-1; j++)
                a[j] = a[j+1];
                
            a[n-1] = temp;
            i--;
        }
    }
    
}
