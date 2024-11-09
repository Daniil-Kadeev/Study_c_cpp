#include <stdio.h>

// всё аналогичко printf

/*
%d - со знаком в 10 к int
%i - в 10 16 8 к int
%u - unsigned int в 10
*/

int main(void)
{
    char byte;

    int count = scanf("%c", &byte); // амперсант & возвращает адрусс переменной
    printf("count = %d, byte = %c\n", count, byte);

    char byte1 = '0', byte2 = '0';

    int res1 = scanf("%c", &byte1);
    int res2 = scanf("%c", &byte2);

    printf("byte1 = %c, byte2 = %c", byte1, byte2);
    return 0;
}