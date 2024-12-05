#include <stdio.h>

// ~ & | ^
// << >>

int main(void)
{
    unsigned char var = 255;
    unsigned char var2 = ~var;
    unsigned char mask = 8; // 00001000

    printf("%d %d\n", var, var2);

    if ((mask & var) == mask)
    {
        printf("3 bit on - %d\n", mask & var);
    }
    else
    {
        printf("3 bit is off\n");
    }

    printf("Bits without 3 bit on - %d\n", var & ~mask);
    var = 9; // 00001001
    var ^= mask; // mask 00001000
    printf("%d\n", var); // 00000001
    var ^= mask;
    printf("%d\n", var);
    printf("sdvig vlevo %d\n", var << 1);
    printf("sdvig vpravo %d\n", var >> 1);
    printf("%d\n", var);
    char x = -128;
    printf("sdvig vpravo %d\n", x >> 1);
    char b = 0b01000000;
    return 0;
}