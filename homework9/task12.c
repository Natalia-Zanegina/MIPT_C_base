/*Поменять местами
Составить функцию которая меняет в массиве минимальный и максимальный элемент местами. 
Прототип функции void change_max_min(int size, int a[])*/

void change_max_min(int size, int a[])
{
    int min = a[0], index_min = 0;
    int max = a[0], index_max = 0;

    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index_min = i;
        }  
        else if (a[i] > max)
        {
            max = a[i];
            index_max = i;
        }
    }
    int temp = a[index_min];
    a[index_min] = a[index_max];
    a[index_max] = temp;
}