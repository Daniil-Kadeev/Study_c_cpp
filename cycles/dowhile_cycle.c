#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int x = rand() % 100;
    do{
        printf("%d ", x);
        x = rand() % 100;
    } while(x != 0);

    printf("\n\n");
    int res = 0;
    for(int i = -3; i <= 7; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            for(int k = 2; k <= 4; k++)
            {
                res += (i + j - k) * (i + j - k);
            }
        }
    }
    printf("%d", res);

    return 0;
}
