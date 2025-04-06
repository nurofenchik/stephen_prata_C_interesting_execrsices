#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>
#define MAX(X,Y) (X) > (Y) ? (X) : (Y)
#define EVEN_GT(X,Y) ( ( (X) % 2 == 0 ) && ( (X) > (Y) ) ) ? 1 : 0
#define MACROS(X,Y) (printf(#X "=%d и "#Y "=%d"  , X , Y))
#define CONSTANTA 25
#define SPACE ' '
#define PS() printf(" ")
#define BIG(X) 3 + (X)
#define SUMSQ(X,Y) ( (X) * (X) ) + ( (Y) * (Y))
#define PRINTINT(X) printf("NAME: " #X "; VALUE: %d ; " "ADDRESS: %p " , X , &X)
#define TYPEOF(X) _Generic((X) , _Bool : "boolean" , default : "not boolean" )
#define SRGARMN(X,Y) ( (2.0) / ( (1.0/(X)) + (1.0/(Y)) ) )
int comp(const void * , const void *);
void print_array(const int * , int);
int sum(int , ...);
int main(void)
{
    printf("%d\n" , MAX(3,4));
    printf("%d\n" , EVEN_GT(4, 1));
    MACROS(1+2 , 2*3);
    printf("\n");
    printf("%d" , CONSTANTA);
    printf("\n");
    printf("%c" , SPACE);
    printf("\n");
    PS();
    printf("\n");
    printf("%d" , BIG(3));
    printf("\n");
    printf("%d" , SUMSQ(3 , 4 ));
    printf("\n");
    int integer = 3;
    PRINTINT(integer);
    printf("\n");
    bool dig = 1;
    printf("%s" , TYPEOF(dig));
    int array[100];
    srand(time(NULL));
    for (int i = 0 ; i < 100 ; i++)
    {
        array[i] = rand() % 100;
    }
    qsort((void *) array , (size_t) 100 , sizeof(int) , comp);
    print_array(array , sizeof(array) / sizeof(int));
    int data1[100];
    int data2[300];
    for(int i = 0 ; i < 100 ; i ++)
    {
        data1[i] = rand() % 100;
    }
    for(int j = 0 ; j < 10 ; j++)
    {
        printf("\n");
    }
    memcpy(data2 , data1 , 100 * sizeof(int));
    print_array(data1 , sizeof(data1) / sizeof(int));
    printf("\n\n\n");
    print_array(data2, sizeof(data1) / sizeof(int) );
    printf("\n\n%d" , sum(5 , 1 , 2 ,3 ,4 ,5));
    printf("\n\n%f\n" , (float) SRGARMN(4,5));
}
int comp(const void *p1 , const void *p2)
{
    const int *a1 = (const int *) p1;
    const int *a2 = (const int *) p2;
    if ( *a1 > *a2 )
    {
        return -1;
    }
    else if (*a1 == *a2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void print_array(const int *ptr , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\n" , ptr[i]);
    }
}
int sum(int num , ...)
{
    int sum = 0;
    va_list ap;
    va_start(ap , num);
    for (int i = 0 ; i < num ; i++)
    {
        sum += va_arg(ap , int);
    }
    va_end(ap);
    return sum;

}