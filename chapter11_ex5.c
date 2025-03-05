//like strchr() working
#include <stdio.h>
#include <string.h>
char* find_symbol(char* str , char c)
{
    for (int i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] == c)
        {
            return &str[i];
        }
    }
    return NULL;
}
int main(void)
{
    char string[40] = "fuck";
    char* ptr = find_symbol(string , 'z');

    return 0;
}