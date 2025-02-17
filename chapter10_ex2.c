#include <stdio.h>
int copy_arr(double arr1[] , double arr2[] , int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        arr2[i] = arr1[i];
    }
    return 0;
}
int copy_ptr(double *arr1 , double *arr2  , int size)
{
    double* ptr = arr1;
    for (int i = 0 ; i < size ; ptr++ , i++)
    {
        arr2[i] = *ptr;
    }
    return 0;
}
int copy_ptrs(double *arr1 , double *arr2 , double *end)
{
    double* ptr2 = arr2;
    for (double* ptr1 = arr1  ; ptr1 < end ; ptr1++ , ptr2++)
    {
        *ptr2 = *ptr1; 
    }
    return 0;
}

int main(void)
{
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(source , target1 , 5);
    copy_ptr(source , target2 , 5);
    copy_ptrs(source , target3 , source + 5);
    printf("%.1lf\n" , target1[1]);
    printf("%.1lf\n" , target2[2]);
    printf("%.1lf\n" , target3[3]);
    return 0;
}