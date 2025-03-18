#include <stdio.h>
#include <stdlib.h>
int main(int argc , char* argv[])
{
    FILE *fp_from_copy ;
    FILE *fp_to_copy ;
    int ch;
    if (argc < 2)
    {
        exit(EXIT_FAILURE);
    }
    if ( (fp_from_copy = fopen(argv[1] , "r")) == NULL) 
    {
        exit(EXIT_FAILURE);
    }
    if ( (fp_to_copy = fopen(argv[2] , "r+")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    while ( ( ch = fgetc(fp_from_copy)) != EOF)
    {
        fputc( ch , fp_to_copy);
    }
    fclose(fp_from_copy);
    fclose(fp_to_copy);
    return 0;
}