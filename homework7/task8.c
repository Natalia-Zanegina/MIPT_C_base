/*От A до B
Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания, если A < B, 
или в порядке убывания в противном случае.*/
#include <stdio.h>

void print_num_between(int a, int b){
    if (a == b)
    {
        printf("%d ", a);
        return;
    }
    else
    {
        printf("%d ", a);
        if (a < b)
            print_num_between(a + 1, b);
        else
            print_num_between(a - 1, b);
        }
        
    
}

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    print_num_between(a, b);
}