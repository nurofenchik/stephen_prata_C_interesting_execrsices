#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_ch_in_file(char ch_for_cmp , char* filename)
{
    int count = 0;
    FILE *fp;
    char ch_for_iter;
    if ( (fp = fopen(filename , "r")) == NULL)
    {
        printf("Open file trouble\n");
        return 0;
    }
    while ( (ch_for_iter = fgetc(fp)) != EOF)
    {
        if ( ch_for_iter == ch_for_cmp)
        {
            count++;
        }
    }
    fclose(fp);
    printf("filename: %s symobol: %c count: %d\n" , filename , ch_for_cmp , count);
    return count;
}
int main(int argc , char* argv[])
{
    if (argc<2)
    {
        printf("Work Trouble\n");
        exit(EXIT_FAILURE);
    }
    if (argc == 2)
    {
        int count = 0;
        int ch ;
        while ( (ch = fgetc(stdin)) != EOF)
    {
        if ( ch == *argv[1])
        {
            count++;
        }
    }
    printf("filename: %s symobol: %c count: %d\n" , "stdin" , argv[1] , count);
    }
    if (argc > 3)
    {
        for ( int i = 2 ; i < argc ; i++)
        {
            count_ch_in_file(*argv[1] , argv[i]);
        }
    }
    return 0;
}