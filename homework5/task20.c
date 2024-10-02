/*Проверка на простоту
Проверить число на простоту.*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    if (num == 1)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 2; i < num / 2; i++)
    {
        if (!(num % i))
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}