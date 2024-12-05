// усе как в питоне
// все числа воспринимаются как 1
// можно один оператор сразу после ифа напиать
// можно составной в фигурных скобках

// приколюха
#include <stdio.h>

int main(void){
    double a, b;
    if(scanf("%lf %lf", &a, &b) != 2) {
        printf("Input error.");
        return 0;
    }
    else if (1 > 0){
        printf("mia\n");
    }
    double c = a > b ? a : b;
    printf("%f %f\n%f\n", a, b, c);
    printf("c is %s", c == a ? "first" : "second");
    return 0;
}