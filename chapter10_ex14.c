#include <stdio.h>
double max_in_matrix(int N , int M , double arr[N][M])
{
    double max = -100000000;
    for (int i = 0 ; i < N ; i++)
    {
        for (int j = 0 ; j < M ; j++)
        {
            if (arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
double average_for_all(int N , int M , double arr[N][M])
{
    double sum = 0 ;
    for (int i = 0 ; i < N ; i++)
    {
        for (int j = 0 ; j <M ; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum / (N*M);
}
double average(double arr[] , int M)
{
    double sum = 0 ;
    for (int i = 0 ; i < M ; i++)
    {
        sum += arr[i];
    }
    return sum / M ;
}
void printresults(int N , int M ,double arr[N][M])
{
    for (int i = 0 ; i < N  ; i++)
    {
        printf("%lf\n" , average(arr[i] , M));
    }
    printf("%lf\n" , average_for_all(N ,M ,arr));
    printf("%lf\n" , max_in_matrix(N , M , arr));
}
int main(void){
    int N , M;
    printf("Введите размер матрицы (3 x 5): \n");
    scanf("%d %d" , &N , &M);
    double matrix[N][M];
    printf("Введите три раза пять чисел: \n");
    for (int i = 0 ; i < N ; i++)
    {
        for (int j = 0 ; j < M ; j++)
        {
            scanf("%lf" , &matrix[i][j]);
        }
    }
    printresults(N ,M ,matrix);
    return 0;
}



// double (*arr)[M] - указатель на нулевой подмассив длиной M элементов { {1 ,2 ,3 ... M} , .... , ...}                                                                   