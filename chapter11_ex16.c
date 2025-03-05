#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc , char *argv[])
{
    char ch;
    char *choice = argv[1];
    while ((ch = getchar()) != EOF)
    {
        if ( !strcmp(choice , "-p"))
        {
            printf("%c" , ch);
        }
        else if(!strcmp(choice , "-u"))
        {
            printf("%c" , toupper(ch));
        }
        else if(!strcmp(choice , "-l"))
        {
            printf("%c" , tolower(ch));
        }
    }
}