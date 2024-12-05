// текстовый препроцессор - макропроцессор
// макродирективы начинаются с "#"
// макродирективы удаляются и в компелятор отплавляется код с
// можно длеать отступы но не желательно
// #define <макроимя> [тело макроса]

#include <stdio.h>

#define MENU_TRANS      1
#define MENU_ADD        2
#define MENU_EXIT       3
#define MENU_FMT        "You hace slected menu item %d\n"
#define FIRST_LETTER    'a' 
#define FIVE            5
#define TEN             FIVE * 2
// в программу буквально вставится 5 * 2
#define TEXT            "sdfgdsag"
#define TEXT2           "asgasgfdsa   sadf \
afsdfsad"
// после слеша сразу перевод строки
#define PRINT_D         printf("digit = %d\n", digit)
#define FORMAT          "digit = %d\n"

// макропроцессор делает Ctrl + c -> Ctrl + v
// макропросы не следует переопределять
// но если очень хочется то можно
#undef TEN
#define TEN 10

int main(void)
{
    int item = 1;
    //scanf("%d", &item);

    switch(item){
        case MENU_TRANS: // макровызов
            printf("Translate\n");
            break;
        case MENU_ADD:
            printf("add\n");
            break;
        case MENU_EXIT:
            printf("Exit\n");
            break;
        default:
            printf("WTF MEN\n");
    }

    int digit = TEN;
    PRINT_D; // если будет не digit т о пизда
    // макропроцессор работает на уровне лексем 

    digit = TEN / 2;
    printf(FORMAT, digit);
    printf(TEXT2);
    return 0;
}