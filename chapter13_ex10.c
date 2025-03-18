#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    printf("Введите имя файла(filename.txt)\n");
    FILE *fp;
    char filename[100];
    scanf("%s" , filename);
    if ( ( fp = fopen(filename, "r")) == NULL )
    {
        printf("File Open Trouble\n");
        exit(EXIT_FAILURE);
    }
    int pos;
    fseek(fp , 0 ,SEEK_END);
    long file_size = ftell(fp);
    rewind(fp);
    printf("Введите позицию в файле ( <= 0 для завершения)\n");
    scanf("%d" , &pos);
    while ( pos > 0 )
    {
        if ( pos >= file_size)
        {
            printf("out of range\n");
        }
        else{
            char ch;
            fseek(fp , pos , SEEK_SET);
        while ( (ch = fgetc(fp)) != '\n' && ch != EOF)
        {
            fputc(ch,stdout);
        }
        fputc('\n' , stdout);
        }
        printf("Введите позицию в файле ( <= 0 для завершения)\n");
        scanf("%d" , &pos);
    }
    fclose(fp);
    return 0;
}