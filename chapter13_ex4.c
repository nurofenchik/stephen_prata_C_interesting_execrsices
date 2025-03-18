#include <stdio.h>
#include <stdlib.h>
int main(int argc , char* argv[])
{
    if (argc < 2)
    {
        printf("Ошибка использования");
        exit(EXIT_FAILURE);
    }
    for(int i = 1 ; i < argc ; i++)
    {
        FILE *fp;
        if  (( fp = fopen(argv[i] , "r" ) ) == NULL )
        {
            printf("ошибка открытия файла %s" , argv[i]);
            exit(EXIT_FAILURE);
        }
        int ch;
        while ( ( ch = fgetc(fp) ) != EOF)
        {
            fputc(ch , stdout);
        }
        fputc('\n' , stdout);
        fclose(fp);
    }
}