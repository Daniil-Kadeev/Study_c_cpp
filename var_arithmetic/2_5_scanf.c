#include <stdio.h>

// всё аналогичко printf

/*
%d - со знаком в 10 к int
%i - в 10 16 8 к int
%u - unsigned int в 10
*/

// new line

int main(void)
{
    char byte;

    int count = scanf("%c", &byte); // амперсант & возвращает адрусс переменной
    printf("count = %d, byte = %c\n", count, byte);

    char byte1 = '0', byte2 = '0';

    int res1 = scanf(" %c %c", &byte1, &byte2);
    // пробелы в скане можно указать, но они могут отсутствовать в потоке
    // хотя первый символ считываеся любой - даже пробелы и табуляции
    // пробельным символом может быть энтер или пробел или табуляция
    printf("byte1 = %c, byte2 = %c\n", byte1, byte2);

    char byte3 = '0';
    long long byte4 = '0';
    int res2 = scanf(" %c,%c", &byte3, &byte4);
    // после запятой читается любой символ. но можно добавить пробел и там будут пробельные символы

    printf("byte3 = %c, byte4 = %lld\n", byte3, byte4);

    /*
    Модификаторы
    h - %hd, %hi - short int, %hX %ho %hu - unsignet short
    hh - то же но char
    l, ll, L как и в принте
    l - в отличии от printf используется и для вещественных - переводит в double
    цифры - максимальная ширина ввода
    * - пропуск данных

    %*llu; %u; %lf 
    input - 10; 1000; 23.43
    получим - 1000 и 23.43 
    первое число свалит в тума
    но если первое число не будет соответствовать целому числу
    то поезда - ничего не запишется
    цифры остаются в потоке ввода
    */

    // отличие от printf - вещественные числа приводятся к float
    // переменные и спецификаторы должны соответствовать друг другу
    // иначе ничего не сработае
    
    long long skip;
    int var_int;
    double var_double, skip2;
    printf("Text\n");
    int skipskip = scanf(" %*llu; %u; %lf", &var_int, &var_double);
    printf("%u, %f\n", var_int, var_double);

    skipskip = scanf(" %*lf; %u; %lf", &skip2, &var_double);
    printf("%u, %f\n", var_int, var_double);

    return 0;
}