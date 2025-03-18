#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int size = 100;
    int* ptr = (int*) malloc(size * sizeof(int));
    for (int i = 0 ; i < size ; i++)
    {
        ptr[i] = rand() % 10 + 1;
    }
    for(int i = 0 ; i < size - 1; i++ )
    {
        for(int j = 0 ; j < size - i - 1 ; j++)
        {
            if(ptr[j] < ptr[j+1])
            {
                int temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d " , ptr[i]);
    }
    free(ptr);
}
