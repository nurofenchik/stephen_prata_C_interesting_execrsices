#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int is_within(char c , char* str)
{
    int flag = 0;
    char* ptr = str;
    int strsize = strlen(str);
    for(int i = 0 ; i<strsize  ; ptr++ , i++)
    {
        if (*ptr == c)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main(void)
{
    char string[16] = "huy pizda govno";
    printf("%d" , is_within('m' , string));
    return 0;
}