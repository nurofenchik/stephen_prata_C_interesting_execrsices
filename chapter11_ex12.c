#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    int count_words = 0;
    int count_small_char = 0;
    int count_big_char = 0;
    int count_digits = 0;
    int count_punct = 0;
    int flag_start = 0;
    int flag_end = 0;
    char ch;
    while ( (ch = getchar()) != EOF)
    {
        if (flag_end > flag_start)
        {
            flag_end = 0;
            flag_start = 0 ;
        }
        if (isalpha(ch))
        {
            if(islower(ch))
            {
                count_small_char++;
            }
            else
            {
                count_big_char++;
            }
            flag_start = 1;
        }
        else if (isdigit(ch))
        {
            count_digits++;
        }
        else if (ispunct(ch))
        {
            count_punct++;
        }
        if ( isalpha(ch) == 0)
        {
            flag_end = 1;
        }
        if (flag_start == 1 && flag_end == 1)
        {
            count_words++;
            flag_start=0;
            flag_end=0;
        }
    }
    printf("%d %d %d %d %d" , count_big_char , count_small_char , count_words , count_digits , count_punct);
}