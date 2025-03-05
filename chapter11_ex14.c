#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{
    double digit = atof(argv[1]);
    int power = atoi(argv[2]);
    double dig_to_pow = 1;
    if (power > 0)
    {
    for (int i = 0 ; i < power ; i++)
    {
        dig_to_pow*=digit;
    }
    }
    else if ( power == 0)
    {
    }
    else if( power < 0)
    {
        for(int i = power ; i < 0 ; i++)
        {
            dig_to_pow/=digit;
        }
    }
    printf("digit : %lf power : %d end : %lf" , digit , power , dig_to_pow);
    return 0;
}