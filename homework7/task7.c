/*От 1 до N
Составить рекурсивную функцию, печать всех чисел от N до 1.*/
#include <stdio.h>

void print_num(int num){

    if (!num)
        return;    
    else
    {
        printf("%d ", num);
        print_num(num - 1);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    print_num(num);
    printf("\n");
}