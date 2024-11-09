#include <stdio.h>

int main(void)
{   
    int var, size;
    size = var = 100; // присваивается сначала var потом size
    // а возможно сие потомучто оператор (не путать с операцией)
    // возвращает присваеваемое значение
    int total = 100; // инициалиация - другая операция
    unsigned char lol = 39, mox;

    int dec, hex, oct;
    dec = 100; // наведи мышь на чиселки и увидишь тип
    dec = 100U;
    dec = 100ULL;
    hex = 0x1FA; // 0x - значит 16-ричная
    oct = 0123; // вначале 0 - значит это восьмиричная

    char ch; // наведи на 'b' - можно и int подставить
    ch = 'c'; // именно одинарные кавычки т.к. в двойных кавычках строки
    
    printf("ch = %c, code = %d\n", ch, ch); // форматированная строка - вместо %c - подставится  первая ch
    // вместо %d подставится вторая ch
    // %c - отображает число как символ
    // %d - отображает число как десятичное целочисленное


    double d1, d2, d3, d4;
    d1 = 10.0;
    d2 = -7.;
    d3 = 1e2;
    d4 = 5e-3;

    float var_f;
    var_f = 10.0; // переменная float а значение double
    var_f = 10.0f; // теперь литерал float

    int size_float = sizeof(char); // можно вставить переменную а не тип данынх
    printf("%d\n", size_float);
    
    printf("Hello, world\n");
    return 0;
}

// gcc -std-c99 -o outputfile sourcefile.c