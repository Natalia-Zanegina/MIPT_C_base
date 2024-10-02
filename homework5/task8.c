/*Ровно одна цифра 9
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».*/
#include <stdio.h>

int main(void) {
    int num, countOf9 = 0;
    scanf("%d", &num);

    while (num)
    {
        if (num % 10 == 9)
            countOf9++;

        num /= 10;
    }
    
    printf(countOf9 == 1 ? "YES\n" : "NO\n");
    return 0;
}