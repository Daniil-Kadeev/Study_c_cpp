#include <stdio.h>

int main(void)
{
    int n, s = 0;
    scanf("%d", &n);

    int count = 0;
    while(++count <= n && count <= 10) // любой инкремент отработает до перехода к телу цикла
    {
        s += count * count;
        //n--;
    }
    // всё что объявляется в фигурных скобках остаётся в фигурных скобках
    // кря области видимости {} и прочее
    printf("%d", s);
    return 0;
}
