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
    printf("Введите число, соответствующее желаемой тарифной ставке или действию: \n");
    printf("1) $8.75/ч \t\t\t\t 2) $9.33/ч\n");
    printf("3) $10.00/ч\t\t\t\t 4) $11.20/ч\n");
    printf("5) Выход\n");
    for (int i = 0 ; i < 100 ; i ++)
    {
        printf("*");
    }
    printf("\n");
    int choice;
    scanf("%d" , &choice);
    switch (choice)
    {
    case 1:
        MONEY_FOR_HOUR = 8.75;
        break;
    case 2:
        MONEY_FOR_HOUR = 9.33;
        break;
    case 3:
        MONEY_FOR_HOUR = 10.00;
        break;
    case 4:
        MONEY_FOR_HOUR = 11.20;
    case 5:
        break;
    default:
        printf("Неправильно набрано число\n");
        break;
    }
    if (choice < 1 || choice > 5)
    {
        continue;
    }
    if (choice == 5)
    {
        flag = false;
        break;
    }
    int hours_a_week ; 
    printf("Введите количество отработанных часов за неделю\n");
    scanf("%d" , &hours_a_week);
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