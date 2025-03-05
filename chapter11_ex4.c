#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#define SIZE 100
int main(void)
{
    int n ;
    printf("Введите максимальное количество символов,которые могут быть прочитаны:\n");
    scanf("%d" , &n);
    getchar();
    printf("Введите строку:\n");
    bool flag = 1 ;
    char string[SIZE];
    char* ptr = string;
    char ch;
    int count = 0;
    while( (ch =  getchar() ) == ' ')
    {
        continue;
    }
    while (flag)
    {
        if (isalpha(ch) && count < n)
        {
            (*ptr) = ch;
            ptr++;
            count++;
            ch = getchar();
        }
        else{
            flag = 0;
        }
    }
    *ptr = '\0';
    printf("%s" , string);

    return 0;
}

