/*Клетки
Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов, например, черного и белого 
(см. рисунок). Каждая клетка имеет координату, состоящую из буквы и цифры. Горизонтальное расположение клетки 
определяется буквой от A до H, а вертикальное – цифрой от 1 до 8. Заметим, что клетка с координатой А1 имеет 
черный цвет. Требуется по заданной координате определить цвет клетки.*/
#include <stdio.h>
#define DIMENSIONS 2

void chess_square_color(char *coordinates)
{
    int letter = coordinates[0], digit = coordinates[1];

    printf((letter + digit) % 2 ? "WHITE\n" : "BLACK\n");
}

int main(void)
{
    char st[DIMENSIONS];
    scanf("%s", st);
    chess_square_color(st);
}