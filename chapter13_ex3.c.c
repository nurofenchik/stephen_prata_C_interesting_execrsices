#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
    char file_to_read_name[SIZE];
    printf("Введите имя входного файла(filename.txt):\n");
    scanf("%s" , file_to_read_name);
    char file_to_write_name[SIZE];
    printf("Введите имя выходного файла(filename.txt):\n");
    scanf("%s" , file_to_write_name);
    FILE *pt_to_read;
    FILE *pt_to_write;
    if (
    (pt_to_read = fopen(file_to_read_name , "r+") ) == NULL)
    {
        printf("Ошибка открытия файла %s" , file_to_read_name);
        exit(EXIT_FAILURE);
        
    }
    if (
    (pt_to_write = fopen(file_to_write_name , "w+") ) == NULL) 
    {
        printf("Ошибка открытия файла %s" , file_to_write_name);
        exit(EXIT_FAILURE);
    }
    int ch;
    while ( ( ch = fgetc(pt_to_read)) != EOF)
    {
        fputc( toupper(ch) , pt_to_write);
    }
    fclose(pt_to_read);
    fclose(pt_to_write);
    return 0;
    

}