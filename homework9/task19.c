/*Больше среднего
Определить количество положительных элементов квадратной матрицы, превышающих по величине среднее арифметическое 
всех элементов главной диагонали. Реализовать функцию среднее арифметическое главной диагонали.*/
#include <stdio.h>

int more_than_main_diagonal_average(int size, int matrix[size][size])
{
    int sum = 0;
    float average = 0.;
    for (int i = 0; i < size; i++)
        sum += matrix[i][i];
    average = sum / size;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] > average)
                count++;
        }  
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int size = 5;
    int matrix[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }

    printf("%d\n", more_than_main_diagonal_average(size, matrix));
    
    return 0;
}
