#include <stdio.h>
#include <string.h>
#include <ctype.h>
void delete_spaces(char* str)
{
    int str_len = strlen(str);
    for(char* ptr = str ; *ptr != '\0' ; ptr++)
    {
        if (*ptr == ' ')
        {
            (*ptr) = '+';
        }
    }
    for(int i = 0 ; i < str_len ; i++)
    {
        if (str[i] == '+')
        {
            continue;
        }
        printf("%c" , str[i]);
    }

}
int main(void)
{
    char string[] = "    huy sosi    gu  boi     tryasi      ";
    delete_spaces(string);
    return 0;
}