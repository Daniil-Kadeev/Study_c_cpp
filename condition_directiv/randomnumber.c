// RAND_MAX = 32767
// stdlib
// псевдослучаные числа
// алгосы на оснвое состояния регистров в начале запуска
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// math.h
/*
int abs(int)
double fabs(double)

округление
double round(double) - до ближайшего
double floor(double) - до наименьшего
double ceil(double) - до наибольшего
double trunc(double) - отбрасывает дробную часть

степени
double sqrt(double)
double cbrt(double) -кореь третьей степени
double pow(double x, double y) - x ** y
double exp(double)
double log(double) - натуральный
double log2(double)
double log10(double)

тригонометрия - передавать радианы
double sin(double)
double cos(double)
double tan(double)
double asin(double) - возвращает радианы
double asin(double)
double acos(double)
double atan(double)

*/


int main(void)
{   
    time_t t = time(NULL);
    srand(t);
    int r1 = rand();
    int r2 = rand();

    int range = 10;
    int bias = 5;
    // делаем распределение от -5 до 4

    double r3 = (double)rand() / (double)RAND_MAX; // [0;1]
    printf("%d %d %.2f %d %f", r1, rand() % range - bias, r3, rand(), sin(3.14 / 2.));
    return 0;
}
