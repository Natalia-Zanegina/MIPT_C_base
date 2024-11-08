/*Числа в массив
В файле input.txt дана строка, не более 1000 символов, содержащая буквы, 
целые числа и иные символы. Требуется все числа, которые встречаются в строке, 
поместить в отдельный целочисленный массив. 
Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 
48, 9, 13 и 0. Вывести массив по возрастанию в файл output.txt.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

int main(void)
{
    FILE *f_in, *f_out;
    
    int nums[SIZE] = {0};
    int index = -1;


    f_in = fopen("input.txt", "r");

    char c;
    int flag = 0, num = 0, order = 1;

    while ((c = fgetc(f_in)) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            if (!flag)
                index++;
            num = num * order + (c - '0');
            order = 10;
            flag = 1;
        }
        else 
        {
            if (flag)
            {
                nums[index] = num;
                flag = 0;
                num = 0;
                order = 1;
            }
            
        }
    }

    if (flag)
        nums[index] = num;

    fclose(f_in);
    
    for (int i = 0; i < index; i++)
    {
        for (int j = i + 1; j <= index; j++)
        {
            if (nums[j] < nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    f_out = fopen("output.txt", "w");
    for (int i = 0; i <= index; i++)
        fprintf(f_out, "%d ", nums[i]);
    
    fprintf(f_out, "\n");
    fclose(f_out);
    return 0;
}