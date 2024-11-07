/*По одному разу
В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом. 
Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел
 в файл output.txt в лексикографическом порядке.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100
#define COUNT 2

int main(void)
{
    
    FILE *f_in, *f_out;

    f_in = fopen("in.txt", "r");
    
    char words[COUNT][SIZE];

    for (int i = 0; i < COUNT; i++)
        fscanf(f_in, "%s", words[i]);
           
    fclose(f_in);

    int len1 = strlen(words[0]), len2 = strlen(words[1]);

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
        // printf("same = %d, this is %c\n", same, words[0][i]);
        int count = 0;
        for (int j = 0; j < len2; j++)
        {
            if (!same && (words[0][i] == words[1][j]))
                count++;
        }

        // printf("count = %d\n", count);
    
        if (count == 1)
        {
            res[index] = words[0][i];
            index++;    
        }
          
    }

    for (size_t i = 0; i < index-1; i++)
    {
        
        for (size_t j = i + 1; j < index; j++)
        {
            if (res[j] < res[i])
            {
                char temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }  
    }

    // printf("index = %d\n", index);

    f_out = fopen("out.txt", "w");
    for (int i = 0; i < index; i++)
    {
        fprintf(f_out, "%c ", res[i]);
    }
    fclose(f_out);   
}
