#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool flag = true ;
    while(flag)
    {   
        start :
        printf("Выберите желаемую операцию:\n");
        printf("a. сложение \t s. вычитание\n");
        printf("m. умножение \t d. деление\n");
        printf("e. завершение\n");

        char choice ;
        choice = getchar();
        switch (choice)
        {
        case 'a':
        case 's':
        case 'm':
        case 'd':
            break;
        case 'e':
            flag = false;
            goto end;
            break;
        default:
            printf("Введите подходящие буквы.\n");
            goto start;
            break;
        }
        float num1 , num2;
        printf("Введите первое число: ");
        int validate1;
        while ((validate1 = scanf("%f" , &num1)) == 0)
        {
            char input[50];
            scanf("%s" , input);
            while ( getchar() != '\n');
            printf("%s не является числом. \n" , input);
            printf("Введите число, такое как 2.5, -1.78E8 или 3: \n");
        }
        while (getchar() != '\n');
        printf("Введите второе число: ");
        int validate2 ;
        while ( (validate2 = scanf("%f" , &num2)) == 0)
        {
            char input[50];
            scanf("%s" , input);
            while ( getchar() != '\n');
            printf("%s не является числом. \n" , input);
            printf("Введите число, такое как 2.5, -1.78E8 или 3: \n");
            
        }
        while (getchar() != '\n');        
        float result = 0;
        char operation;
        switch (choice)
        {
        case 'a':
            result = num1 + num2 ;
            operation = '+';
            break;
        case 's':
            result = num1-num2;
            operation = '-';
            break;
        case 'm':
            result = num1*num2;
            operation = '*';
            break;
        case 'd':
            if (num2 == 0)
            {
                do
                {
                    printf("Введите число,отличное от 0: ");
                    scanf("%f" , &num2);
                    while ( getchar() != '\n');
                } while (num2 == 0);
            }
            result = num1/num2;
            operation = '/';
            break;
        case 'e':
            flag = false;
            goto end;
            break;
        }
    printf("%.2f %c %.2f = %.2f \n" , num1 , operation , num2 , result);
    }
    end :
    printf("Программа завершена.");
    return 0;
}