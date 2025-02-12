#include <stdio.h>
void fibonacci(int digit_num)
{
    int now = 1 ;
    int prev = 0;
    for (int i = 0 ; i < digit_num ; i++)
    {
        printf("%d ", now);
        int temp = now;
        now =  now + prev;
        prev = temp;
        
    }
}
int main(void)
{
    printf("Введите число - до которого выводить числа фибоначчи");
    int digit ;
    scanf("%d" , &digit);
    fibonacci(digit);
    return 0;
}