/*По одному разу
В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом. 
Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел
 в файл output.txt в лексикографическом порядке.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 101
#define COUNT 2

int main(void)
{
    
    FILE *f_in, *f_out;

    f_in = fopen("input.txt", "r");
    
    char words[COUNT][SIZE];

    for (int i = 0; i < COUNT; i++)
        fscanf(f_in, "%s", words[i]);
           
    fclose(f_in);

    printf("%s\n%s\n", words[0], words[1]);

    int len1 = strlen(words[0]), len2 = strlen(words[1]);
    printf("%d\n%d\n", len1, len2);
    char res[SIZE] = {0};
    int index = 0;
    for (int i = 0; i < len1; i++)
    {
        int same = 0;
        for (int j = 0; j < len1; j++)
        {
            if (i!=j && (words[0][i] == words[0][j]))
                same++;
        }
        
        int count = 0;
        for (int j = 0; j < len2; j++)
        {
            if (!same && (words[0][i] == words[1][j]))
                count++;
        }
    
        if (count == 1)
        {
            res[index] = words[0][i];
            index++;    
        }
    }


    for (size_t i = 0; i < SIZE-1; i++)
    {
        
        for (size_t j = i + 1; j < SIZE; j++)
        {
            if ((res[j] < res[i]) && res[j] != 0)
            {
                char temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }  
    }

    f_out = fopen("output.txt", "w");
    for (int i = 0; i < index; i++)
        fprintf(f_out, "%c ", res[i]);

    fprintf(f_out, "\n");
    fclose(f_out);   
    return 0;
}