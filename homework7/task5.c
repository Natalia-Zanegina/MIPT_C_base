/*В двоичную систему
Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.*/
#include <stdio.h>

void convertToBinary(int num){

    static int steps = 0;
    if (!num)
    {
        if (!steps)
            printf("%d ", num);
        return;  
    }  
    else
    {
        steps++;
        convertToBinary(num / 2);
        printf("%d", num % 2);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    convertToBinary(num);
    printf("\n");
}