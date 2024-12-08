#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n = 5, s = 1;
    /*
    for (1;2;3)
    body
    1 --> 2 --> body --> 3 --> 2
    */
   // блок инициализации
   // можно инициализировать несколько переменных через запятую
   // в блоке 3 вообще можно присваения дделать 
   /* 
   вечный фор
   for(;;)
   {}
   */
    for(int count = 1; count <= n; ++count) // можно пропустить любой блок
    {
        s *= count;
        // ++i or i ++ - без разницы
    }
    printf("%d\n", s);

    srand(time(NULL));
    for(int x = rand(); x != 0; x = rand() % 100)
    {
        printf("%d ", x);
    }
    return 0;
}
