/*Две одинаковые цифры
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    while (num)
    {
        int digit = num % 10, tail = num / 10;
        while (tail)
        {
            if (tail % 10 == digit)
            {
                printf("YES\n");
                return 0;
            }
            tail /= 10;
        }
        
        num /= 10;
    }
    
    printf("NO\n");
    return 0;
}