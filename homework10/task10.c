/*Самое длинное слово
В файле input.txt дана строка слов, разделенных пробелами. Найти самое длинное
 слово и вывести его в файл output.txt. 
Случай, когда самых длинных слов может быть несколько, не обрабатывать.*/
#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main(void)
{
    FILE *f_in, *f_out;

    char str[SIZE];
    char str_max[SIZE];

    f_in = fopen("input.txt", "r");

    int max = 0;

    while (fscanf(f_in, "%s", str) == 1)
    {
        if (strlen(str) > max)
        {
            max = strlen(str);
            strcpy(str_max, str);  
        }       
    }
           
    fclose(f_in);

    f_out = fopen("output.txt", "w");
    fputs(str_max, f_out);
    fprintf(f_out, "\n");
    fclose(f_out); 

    return 0;
}