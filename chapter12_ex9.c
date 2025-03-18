#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    int word_count = 0;
    printf("Сколько слов вы хотите ввести?\n");
    scanf("%d" , &word_count);
    while (getchar() != '\n');
    printf("Теперь введите %d слов:\n" , word_count );
    char** ptr = (char**) malloc(word_count * sizeof(char*));
    for(int j  = 0 ; j < word_count ; j++)
    {
        int flag_start , flag_end ,  i;
        flag_end = flag_start  = i = 0;
        char string[100];
        char ch;
        while ( (ch = getchar()) != '\n')
        {
            if (flag_end > flag_start)
            {
                flag_end = 0;
                flag_start = 0 ;
            }
            if (isalpha(ch))
            {
                string[i++] = ch;
                flag_start = 1;
            }
            if ( isalpha(ch) == 0)
            {
                flag_end = 1;
            }
            if (flag_start == 1 && flag_end == 1)
            {   
                string[i] = '\0';
                ptr[j] = (char*) malloc((i + 1) * sizeof(char));
                strcpy(ptr[j] , string);
                break;
            }
        }
        if (flag_start == 1 && flag_end == 0)
        {
            string[i] = '\0';
            ptr[j] = (char*) malloc((i + 1) * sizeof(char));
            strcpy(ptr[j] , string);
        }
    }
    for(int i = 0 ; i < word_count ; i++)
    {
        printf("%s\n" , ptr[i]);
        free(ptr[i]);
    }
    free(ptr);
}