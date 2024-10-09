/*От 1 до N
Составить рекурсивную функцию, печать всех чисел от 1 до N*/
#include <stdio.h>

void print_num(int num){

    if (num <= 0)
        return;    
    else
    {
        print_num(num - 1);
        printf("%d ", num);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    print_num(num);
    printf("\n");
}