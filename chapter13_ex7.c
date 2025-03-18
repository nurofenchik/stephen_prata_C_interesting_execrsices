#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    char file1_name[SIZE];
    char file2_name[SIZE];
    printf("Введите имя первого файла(filename1.txt)\n");
    scanf("%s" , file1_name);
    printf("Введите имя второго файла(filename2.txt)\n");
    scanf("%s" , file2_name);
    FILE *fp1 ;
    FILE *fp2 ;
    if ( (fp1 = fopen(file1_name , "r")) == NULL)
    {
        printf("Ошибка открытия файла %s" , file1_name);
        exit(EXIT_FAILURE);
    }
    if ( (fp2 = fopen(file2_name , "r")) == NULL)
    {
        printf("Ошибка открытия файла %s" , file2_name);
        exit(EXIT_FAILURE);
    }
    int str_count1 = 0;
    int str_count2 = 0;
    int ch;
    while ( (ch = fgetc(fp1)) !=EOF)
    {
        if(ch == '\n')
        {
            str_count1++;
        }
    }
    str_count1++;
    while ( (ch = fgetc(fp2)) !=EOF)
    {
        if(ch == '\n')
        {
            str_count2++;
        }
    }
    str_count2++;
    int max_str = str_count1 > str_count2 ? str_count1 : str_count2;
    for (int j = 0 ; j < max_str ; j++)
    {
        printf("\nСтрока %d \n" , j+1);
        rewind(fp1);
        if ( j + 1 <= str_count1)
        {
         while ( ( ch = fgetc(fp1)) != '\n')
         {
            fputc(ch,stdout);
         }
        }
         fputc('\n' , stdout);
         rewind(fp2);
         if ( j + 1 <= str_count2)
         {
         while ( ( ch = fgetc(fp2)) != '\n')
         {
            fputc(ch,stdout);
         }
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}