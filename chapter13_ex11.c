#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1024
int main(int argc , char* argv[])
{
    if (argc < 2 || argc > 3)
    {
        printf("work trouble\n");
        exit(EXIT_FAILURE);
    }
    FILE *fp ;
    if ( ( fp = fopen(argv[2] , "r")) == NULL )
    {
        printf("file open trouble\n");
        exit(EXIT_FAILURE);
    }
    char line[MAX_SIZE];
    int found = 0;
    while ( fgets(line , MAX_SIZE , fp) != NULL)
    {
        if ( strstr(line , argv[1]) != NULL)
        {
            printf("%s" , line);
            found = 1;
        }
    }
    if (!found)
    {
        printf("no string in file");
    }
    fclose(fp);
    return(0);
}