#include <stdio.h>

int main(void) {

    int num;
    scanf("%d", &num);
    
    if (num <= 0 || num > 12)
    {
        printf("Error\n");
    }
    else if (num == 12 || num <= 2)
    {
        printf("winter\n");
    }
    else if (num <= 5)
    {
        printf("spring\n");
    }
    else if (num <= 8)
    {
        printf("summer\n");   
    }
    else 
    {
        printf("autumn\n");
    }
    
    return 0;
}