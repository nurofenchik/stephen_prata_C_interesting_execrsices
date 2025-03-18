#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
double myfunc_1(double x)
{
    x *= 2;
    return x;
}
double myfunc_2(double x)
{
    x*=5;
    return x;
}
void transform(const double *input_ptr , double *output_ptr , int size , double (*funcptr)(double));
void copy_arr(const double *input_ptr , double *output_ptr);
int main(void)
{
    srand(time(NULL));
    double array[100];
    double cpy_array[100];
    for(int i = 0 ; i < 100 ; i++)
    {
        array[i] = rand() % 100;
    }
    copy_arr(array , cpy_array);
    transform(array , cpy_array , SIZE , sin);
    copy_arr(array , cpy_array);
    transform(array , cpy_array , SIZE , cos);
    copy_arr(array , cpy_array);
    transform(array , cpy_array , SIZE , myfunc_1);
    copy_arr(array , cpy_array);
    transform(array , cpy_array , SIZE , myfunc_2);
    copy_arr(array , cpy_array);
    return 0;
}
void copy_arr(const double *input_ptr , double *output_ptr)
{
    for(int i = 0 ; i < 100 ; i++)
    {
        *(output_ptr + i) = *(input_ptr + i);
    }
}
void transform(const double *input_ptr , double *output_ptr , int size , double (*funcptr)(double))
{
    for(int i = 0 ; i < size ; i++)
    {
        *(output_ptr + i ) = funcptr(*(input_ptr+i));
    }
}
