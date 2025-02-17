#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(void)
{
    int N ;
    scanf("%d" , &N);
    int matrix[N] ;
    for (int i = 0 ; i < N ; i++)
    {
        matrix[i] =  rand() % 100;
    }
    int max = 0;
    int min = 10000;
    for (int* ptr = matrix ; ptr != matrix + N ; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
        if(*ptr < min)
        {
            min = *ptr;
        }
    }
    for (int i = 0 ; i < N ; i++)
    {
        printf("%d " , matrix[i]);
    }
    printf("\n");
    printf("%d %d" , min , max);
    return 0;
}