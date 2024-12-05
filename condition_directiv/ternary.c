#include <stdio.h>
#include <math.h>

int main(void)
{
    int var, inp;
    // res abs = a < b ? fabs(a) : fabs(b);
    // тернарная операция именно что операция поэтому ее можно прописмывать 
    // как аргумент функции
    // double var_d = a > b ? a : b - 1;
    // тернарные операции могут быть вложенными
    // но так лучше не делать
    scanf("%d", &inp);
    var = inp > 0 ? 10: -11;
    printf("%s", var % 2 == 0 ? "even" : "odd");
    return 0;
}