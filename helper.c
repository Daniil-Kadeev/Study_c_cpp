#include <stdio.h>

int main(void)
{
    short a, b;
    short *ptr_a = &a, *ptr_b = &b;
    void *asd;
    scanf("%hd, %hd", &a, &b);
    asd = ptr_a;
    ptr_a = ptr_b;
    ptr_b = asd;
        
    printf("%hd %hd", *ptr_a, *ptr_b);
    // здесь продолжайте программу

    // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}
