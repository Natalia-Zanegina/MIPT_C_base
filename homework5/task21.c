/*Заглавные буквы в строчные
Дан текст состоящий из английских букв и цифр, заканчивается символом «.» 
Перевести все заглавные английские буквы в строчные.*/
#include <stdio.h>

int main(void) {

    char sym;

    do
    {
        scanf("%c", &sym);
        if (sym >= 65 && sym <= 90)
            sym += 32;
        if (sym != 46)
            printf("%c", sym);  
    } while (sym != 46);

    printf("\n");

    return 0;
}