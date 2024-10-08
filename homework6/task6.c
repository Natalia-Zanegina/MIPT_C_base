#include <stdio.h>
#include <stdint.h>

uint64_t countOfGrains(int squareNum){

    uint64_t sum = 1;

    for (int i = 2; i <= squareNum; i++)
        sum *= 2;

    return sum;
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%lu\n", countOfGrains(num));
}