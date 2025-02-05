#include <stdio.h>
int main(void){
    const float tax_below = 0.15 ;
    const float tax_above = 0.28;
    const float lonely_money_limit = 17850;
    const float famlead_money_limit = 23900 ;
    const float marriedjoin_money_limit = 29750;
    const float marriedseparate_money_limit = 14875;
    int c ; //category
    printf("Choose your category:\n");
    printf("1)Lonely : 15%% below %.1f , 28%% above %.1f\n" , lonely_money_limit , lonely_money_limit);
    printf("2)Famlead : 15%% below %.1f , 28%% above %.1f\n" , famlead_money_limit , famlead_money_limit);
    printf("3)Married(join) : 15%% below %.1f , 28%% above %.1f\n" , marriedjoin_money_limit , marriedjoin_money_limit);
    printf("4)Married(separated) : 15%% below %.1f , 28%% above %.1f\n" , marriedseparate_money_limit , marriedseparate_money_limit);
    printf("Q to exit\n");
    while (scanf("%d" , &c) == 1)
    {
        float tax_sum = 0;
        float income_money = 0;
        if (c < 1 || c > 4)
        {
            printf("Chose from 1 to 4\n");
            continue;
        }
        printf("Enter your income:\n");
        scanf("%f" , &income_money);
        switch (c)
        {
        case 1:
            tax_sum = income_money > lonely_money_limit ? tax_below * lonely_money_limit + tax_above * (income_money - lonely_money_limit) : tax_below * income_money;
            break;
        case 2:
            tax_sum = income_money > famlead_money_limit ? tax_below * famlead_money_limit + tax_above * (income_money - famlead_money_limit) : tax_below * income_money;
            break;
        case 3:
            tax_sum = income_money > marriedjoin_money_limit ? tax_below * marriedjoin_money_limit + tax_above * (income_money - marriedjoin_money_limit) : tax_below * income_money;
            break;
        case 4:
            tax_sum = income_money > marriedseparate_money_limit ? tax_below * marriedseparate_money_limit + tax_above * (income_money - marriedseparate_money_limit) : tax_below * income_money;
            break;
        default:
            break;
        }
        printf("Your tax is %.1f\n" , tax_sum );
        printf("Choose your category:\n");
        printf("1)Lonely : 15%% below %f , 28%% above %f\n" , lonely_money_limit , lonely_money_limit);
        printf("2)Famlead : 15%% below %f , 28%% above %f\n" , famlead_money_limit , famlead_money_limit);
        printf("3)Married(join) : 15%% below %f , 28%% above %f\n" , marriedjoin_money_limit , marriedjoin_money_limit);
        printf("4)Married(separated) : 15%% below %f , 28%% above %f\n" , marriedseparate_money_limit , marriedseparate_money_limit);
        printf("Q to exit\n");
    }

}