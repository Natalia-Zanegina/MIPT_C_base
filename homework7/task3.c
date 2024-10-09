/*В обратном порядке
Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их 
пробелами или новыми строками. Составить рекурсивную функцию.*/
#include <stdio.h>

void print_num(int num){
    static int steps = 0;
    if (!num)
    {
        if (!steps)
            printf("%d ", num);
        return;
    }
            
    else 
    {
        steps++;
        printf("%d ", num % 10);
        print_num(num / 10);  
    }

}

int main(void) {
    int num;
    scanf("%d", &num);
    print_num(num);
}