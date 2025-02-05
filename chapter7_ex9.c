#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num);
int main(void)
{
    int digit;
    printf("Введите число для задания:\n");
    scanf("%d" , &digit);
    for (int i = 1 ; i <= digit ; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n" , i);
        }
    }
    return 0;
}
bool isPrime(int num){
    bool flag ;
    if (num > 1)
    {   
        flag = true;
        for (int i = 2 ; i*i <= num ; i++ )
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}