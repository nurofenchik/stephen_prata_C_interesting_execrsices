#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* mystrncpy(char* s1 , char* s2 , int n )
{
    int len_s2 = strlen(s2);
    if (len_s2 >= n)
    {
        for(int i = 0 ; i < n ; i++)
        {
            s1[i] = s2[i];
        }
    }
    if (len_s2 < n )
    {
        for(int i = 0 ; i < len_s2 ; i++)
        {
            s1[i] = s2[i];
        }
        for(int j = len_s2 ; j < n ; j++)
        {
            s1[j] = '\0';
        }
    }
    return s1;
}
int main(void)
{
    char s1[100];
    char s2[100] = "pidor sidit sprava ot menya" ;
    printf("%s" , mystrncpy(s1,s2,20));
    return 0;
}