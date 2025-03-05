#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* reverse_str(char* str)
{
    int len_str = strlen(str);
    int len_div2_str = len_str/2;
    for(int i = 0 , j = len_str -1  ; i < j ; i++ , j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}
int main(void)
{
    printf("Введите строку или q для завершения\n");
    char string[100];
    while (scanf("%s" , string) && string[0] != 'q')
    {
        char* answ = reverse_str(string);
        printf("%s\n" , answ);
        printf("Введите строку или 0 для завершения\n");
    }

    return 0;
}