#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// break and continue как обычно
/*
continue работает не одинаково в while/do-while и for. 
В while/do-while переход идет на проверку условия, а в 
for на инкремент (точнее на послеитерационные модификации) 
и только потом запускается очередная проверка условия цикла.

continue для любого цикла действует как переход в конец тела 
цикла , то есть это простой пропуск всех инструкций, которые 
находятся после continue в теле цикла. 
*/
int main(void)
{
    srand(time(NULL));
    int res = 0, count = 0;
    for(int i = rand() % 30; i <= rand() % 30; i++)
    {
        for(int j = rand() % 30; j <= rand() % 30; j++)
        {
            for(int k = rand() % 30; k <= rand() % 30; k++)
            {
                res += (i + j - k) * (i + j - k);
                count++;
                if(k == 0)
                {
                    goto exit_from_cycles;
                }
            }
        }
    }
    exit_from_cycles:
    printf("%d %d", res, count);

    return 0;
}
