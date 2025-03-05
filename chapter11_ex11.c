#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print_strings(char arr[][100] , int rows)
{
    for(int i = 0 ; i < rows  ; i ++ )
    {
        printf("%s" , arr[i]);
    }
    printf("\n");

}
int length_of_first_word(char *arr)
{
    int lenght = 0;
    while(*arr && !isspace(*arr))
    {
        lenght++;
        arr++;
    }
    return lenght;
}
void print_by_whole_lenght(char arr[][100],int rows)
{
    for (int i = 0 ; i < rows -1 ; i++)
    {
        for (int j = 0 ; j < rows - i - 1 ; j++)
        {
            if (strlen(arr[j]) > strlen(arr[j+1]))
            {
                char temp_str[100];
                strcpy(temp_str, arr[j+1]);
                strcpy(arr[j+1] , arr[j]);
                strcpy(arr[j] , temp_str);
            }
        }
    }
    print_strings(arr, rows);
}
void print_by_first(char arr[][100] , int rows)
{
    for(int i = 0 ; i < rows - 1 ; i++)
    {
        for(int j = 0  ; j < rows - i - 1 ; j++)
        {
            if (length_of_first_word(arr[j]) > length_of_first_word(arr[j+1]))
            {
                char temp_str[100];
                strcpy(temp_str , arr[j+1]);
                strcpy(arr[j+1] , arr[j]);
                strcpy(arr[j] , temp_str);
            }
        }
    }
    print_strings(arr , rows);
}
int ascii_compare(char *str1 , char* str2)
{
    //returning strlen of max
    int flag = 0 ;
    int i = strlen(str1) > strlen(str2) ? strlen(str1) : strlen(str2);
    for(int j = 0 ; j < i ; j++)
    {
        if (str1[j] < str2[j])
        {
            return strlen(str2);
            break;
        }
        else if (str2[j] < str1[j])
        {
            return strlen(str1);
            break;
        }
        else if(str2[j] == str1[j])
        {
            flag = 1;
        }
        if (j == i - 1 && flag==1)
        {
            return i;
        }
    }
    return 0;
}
void print_by_ascii_compare(char arr[][100] , int rows)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < rows - i - 1 ; j++)
        {
            char temp_str[100];
            if (ascii_compare(arr[j] , arr[j+1]) == strlen(arr[j]))
            {
                strcpy(temp_str , arr[j+1]);
                strcpy(arr[j+1] , arr[j]);
                strcpy(arr[j] , temp_str);
            }
        }
    }
    print_strings(arr , rows);
}
int main(void)
{
    char strings[10][100];
    printf("Введите 10 строк\n");
    for (int i = 0 ; i < 10 ; i++)
    {
        fgets(strings[i] , 100 , stdin);
    }
    printf("Выберите действие для строк:\n");
    printf("1)Вывод исходных строк\n");
    printf("2)Вывод строк согласно последовательности сопоставления ASCII\n");
    printf("3)Вывод строк в порядке возрастания длины\n");
    printf("4)Вывод строк в порядке возрастания длины первого слова\n");
    printf("5)Выход из программы\n");
    char ch ;
    while( ( ch = getchar() ) != '5')
    {
    switch (ch)
    {
    case '1':
        print_strings(strings , 10);
        break;
    case '2':
        print_by_ascii_compare(strings , 10);
        break;
    case '3':
        print_by_whole_lenght(strings , 10);
        break;
    case '4':
        print_by_first(strings , 10);
        break;
    default:
        break;
    }
    while (getchar() != '\n');
    printf("Выберите действие для строк:\n");
    printf("1)Вывод исходных строк\n");
    printf("2)Вывод строк согласно последовательности сопоставления ASCII\n");
    printf("3)Вывод строк в порядке возрастания длины\n");
    printf("4)Вывод строк в порядке возрастания длины первого слова\n");
    printf("5)Выход из программы\n");
    }
    end:
    return 0;
}