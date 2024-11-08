/*Заканчивается на a
В файле input.txt дано предложение. Необходимо определить, 
сколько слов заканчиваются на букву 'а'. Ответ записать в файл output.txt.*/
#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main(void)
{
    FILE *f_in, *f_out;

    char str[SIZE];
    int index = 0, count = 0;

    f_in = fopen("input.txt", "r");

    int max = 0;

    while (fscanf(f_in, "%s", str) == 1)
    {
        index++;
        int len = strlen(str);
        if (str[len - 1] == 'a')
            count++;    
    }
           
    fclose(f_in);

    f_out = fopen("output.txt", "w");
    fprintf(f_out, "%d\n", count);
    fprintf(f_out, "\n");
    fclose(f_out);

    return 0;
}