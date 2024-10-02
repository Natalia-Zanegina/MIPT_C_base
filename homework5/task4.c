/*Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.*/
#include <stdio.h>

int main(void) {
    int num, countOfDigits = 3;
    scanf("%d", &num);

    for (int i = 0; i < countOfDigits; i++)
    {
        num /= 10;
        if (!num && i < countOfDigits - 1)
        {
            printf("NO\n");
            return 0;
        }
    }
    
    printf(num ? "NO\n" : "YES\n");
    return 0;
}