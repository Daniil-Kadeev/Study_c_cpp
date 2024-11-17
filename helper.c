#include <stdio.h>

int main(void)
{    
    int a = 5;
    int b = 12;
    int c = (a *= 3) * (b -= 10) + 2.3;
    printf("%d", c);
    // здесь продолжайте программу

    return 0;
}