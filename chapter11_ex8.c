#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* string_in(char* s1 , char* s2)
{

    char* ptr = s1;
    int len_s2 = strlen(s2);
    int len_s1 = strlen(s1);
    if (len_s2 == 0)
    {
        return s1;
    }
    for(int i = 0 ; i < len_s1 - len_s2 ; i++)
    {
        char temp_str[len_s2+1];
        int k = 0;
        for(int j = i ; j < i + len_s2 ; j++ , k++)
        {
            temp_str[k] = s1[j];
        }
        temp_str[len_s2+1] = '\0';
        if (strcmp(temp_str , s2) == 0)
        {
            ptr = &s1[i];
            return ptr;
        }
    }
    return NULL;
}
int main(void)
{
    char string1[40] = "huy sosi guboi tryasi";
    char string2[5] = "sos";
    char* ans = string_in(string1 , string2);
    printf("%p %c %s" , ans , *ans , ans );
    return 0;
}