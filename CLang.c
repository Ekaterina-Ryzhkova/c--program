#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[25];
    printf("Text 25 simbols and press 'Enter'.\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar(); //Вводит один символ
        if (msg[i] == '\n') //Пользователь вводит 'Enter' и программа обрывает цикл
        {
            i--;
            break;
        }
    }
    putchar('\n');      //Перенос строки после завершения цикла
    for (; i >= 0; i--) //Вывод на экран посимвольно
    {
        putchar(msg[i]);
    }
    putchar('\n');

    return 0;
}

/*#
 
*/