#include <stdio.h>


int is_happy_number(int n) 
{
    int sum = 0, mult = 1;
    while (n > 0) 
        {
            sum += n % 10;
            mult *= n % 10;
            n /= 10;
        }
    
        if (sum == mult)
            return 1;
        return 0;
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf(is_happy_number(num) ? "YES\n" : "NO\n");
}