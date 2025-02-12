#include <stdio.h>

int to_base_n(int digit , int digit_system)
{
    int r;
    r = digit % digit_system;
    if (digit >= digit_system)
    {
        to_base_n(digit/digit_system, digit_system);
    }
    printf("%d" , r);
    return 0;
}
int main(void)
{
    printf("Введите число и систему счисления для перевода\n");
    int digit , system;
    scanf("%d %d" , &digit , &system);
    to_base_n(digit, system);
    return 0;
}