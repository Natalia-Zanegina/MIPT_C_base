/*Все цифры в порядке возрастания
Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    while (num)
    {
        if (num % 10 <= (num / 10 % 10))
        {
            printf("NO\n");
            return 0;
        }
        num /= 10;
    }
    
    printf("YES\n");
    return 0;
}