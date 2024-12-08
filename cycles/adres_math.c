#include <stdio.h>
// значение укащателя меняется на размер типа данных 
int main(void)
{
    short ar[10];
    short *ptr = ar;
    short *p = &ar[3];

    printf("ptr = %u, p = %u\n", ptr, p);
    int res = p - ptr; // разница в колличестве переменных между указателями
    // мерётся разность и делится на sizeof()
    printf("delta = %u\n", res);

    // выводим все байты
    int g = 486354;
    char* ptra = (char *)&g;

    for(int i = 0; i < sizeof(int); ++i)
    {
        printf("%hhu ", *ptra++);
        // приоритет унарных операций убывает справа налево
        // каво
        
    }
    printf("\n%d", 210 + 107 * 256 + 7 * 256 * 256);
    return 0;
}
