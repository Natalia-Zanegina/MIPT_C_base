/*Две одинаковые цифры рядом
Ввести целое число и определить, верно ли, что в его записи есть   две одинаковые цифры, стоящие рядом.*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    while (num)
    {
        if (num % 10 == (num / 10 % 10))
        {
            printf("YES\n");
            return 0;
        }
        num /= 10;
    }
    
    printf("NO\n");
    return 0;
}