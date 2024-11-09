#include <stdio.h>

int main(void)
{   
    int var, size;
    size = var = 100; // присваивается сначала var потом size
    int total = 100; // инициалиация - другая операция
    unsigned char lol = 39, mox;

    int dec, hex, oct;
    dec = 100; // наведи мышь на чиселки и увидишь тип
    dec = 100U;
    dec = 100ULL;
    hex = 0x1FA; // 0x - значит 16-ричная
    oct = 0123; // вначале 0 - значит это восьмиричная

    char ch; // наведи на 'b'
    ch = 'd'; // именно одинарные кавычки т.к. в двойных кавычках строки
    
    printf("ch = %c, code = %d\n", ch, ch); // форматированная строка - вместо %c - подставится  первая ch
    // вместо %d подставится вторая ch
    
    printf("Hello, world\n");
    return 0;
}

// gcc -std-c99 -o outputfile sourcefile.c