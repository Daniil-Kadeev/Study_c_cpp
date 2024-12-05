#include <stdio.h>
#define C 1
#define PY 2
#define CPP 3
#define JAR 4
#define EXIT 5
// в case могут быть только целочисленные константы вычисляемые на 
// этапе компилирования
// можно и числовые литералы
// операторы после case могут отсутствовать
// нужно ставить break or return т.к. после захода в однуветку, выполняет
// все ветки ниже
// дефолт можно прописать в любом месть, хоть самым первым

/*
 советы
 1. выносить в отдельные функции
 2. после метки case вызывать функцию
 3. не использовать вложенные
*/

// можнно ещё
//switch (x)
//{
// case 1 ... 9 - 1 <= x <= 9

int main(void)
{
    char menu_item;
    short menu_number = 0;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    if(scanf("%c", &menu_item) != 1) {
        printf("Input error.");
        return 0;
    }

    switch (menu_item)
    {   
        case 'a':
        case 'A':
            menu_number = 1;
            break;
        case 'b':
        case 'B':
            menu_number = 2;
            break;
        case 'c':
        case 'C':
            menu_number = 3;
            break;
        case 'd':
        case 'D':
            menu_number = 4;
            break;
        default:
            printf("You are stupid?");
    }
    printf("%hd", menu_number);
    return 0;
}
