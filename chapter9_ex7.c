#include <stdio.h>

double pow(double num , double power)
{
    double temp = 1;
    if (power >= 1)
    {
        for (int i = 0 ; i < power ; i++)
        {
            temp*=num;
        }
    }
    else if (power == 0)
    {
        if (num != 0)
        {
            num = 1;
        }
        else
        {
            printf("0 в степени 0 не определен\n");
        }
    }
    else if (power < 0)
    {
        for (int i = 0 ; i > power ; power++)
        {
            temp *= (1/num);
        }
    }
    return temp;
}
int main(void)
{
    printf("Введите число и степень в которую его надо возвести: \n");
    double num , power;
    scanf("%d %d" , &num , &power);
    printf("%lf" , pow(num , power));
    return 0;
}