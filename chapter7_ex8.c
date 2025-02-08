#include <stdio.h>
#include <stdbool.h>

int main(void)
{   
    bool flag = true;
    while (flag)
    {
    for (int i = 0 ; i < 100 ; i ++)
    {
        printf("*");
    }
    double MONEY_FOR_HOUR;
    printf("\n\n");
    printf("Введите букву, соответствующее желаемой тарифной ставке или действию: \n");
    printf("a) $8.75/ч \t\t\t\t b) $9.33/ч\n");
    printf("c) $10.00/ч\t\t\t\t d) $11.20/ч\n");
    printf("q) Выход\n");
    for (int i = 0 ; i < 100 ; i ++)
    {
        printf("*");
    }
    printf("\n");
    int choice;
    choice = getchar();
    while (getchar() != '\n');
    switch (choice)
    {
    case 'a':
        MONEY_FOR_HOUR = 8.75;
        break;
    case 'b':
        MONEY_FOR_HOUR = 9.33;
        break;
    case 'c':
        MONEY_FOR_HOUR = 10.00;
        break;
    case 'd':
        MONEY_FOR_HOUR = 11.20;
        break;
    case 'q':
        break;
    default:
        printf("Неправильно набрана буква\n");
        break;
    }
    if (( choice < 97 || choice > 100 ) && ( choice != 'q'))
    {
        continue;
    }
    if (choice == 'q')
    {
        flag = false;
        break;
    }
    int hours_a_week ; 
    printf("Введите количество отработанных часов за неделю\n");
    scanf("%d" , &hours_a_week);
    while (getchar() != '\n');
    double sum_normal = 0;
    double sum_tax = 0;
    sum_normal = hours_a_week > 40 ? MONEY_FOR_HOUR * 40 + 1.5 * MONEY_FOR_HOUR * (hours_a_week - 40) : MONEY_FOR_HOUR * hours_a_week;
    if (sum_normal <= 300)
    {
        sum_tax += (0.15 * sum_normal);
    }
    else if (sum_normal > 300 && sum_normal <=450)
    {
        sum_tax += (0.15 * 300) + (0.2 * (sum_normal - 300));
    }
    else 
    {
        sum_tax += (0.15 * 300) + (0.2 * 150) + (0.25 * (sum_normal - 450)) ;
    }
    double sum_for_hand = sum_normal - sum_tax;
    printf("Сумма начислений: %lf \t Сумма налогов: %lf \t Сумма на руки: %lf\n" , sum_normal , sum_tax , sum_for_hand);
    }
    return 0;
}