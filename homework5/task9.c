/*Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные.*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    while (num) 
    {
        if (num % 2)
        {
            printf("NO\n");
            return 0;
        }
        num /= 10;
    }
    printf("YES\n");
    return 0;
}