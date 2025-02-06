#include <stdio.h>
int main(void)
{
    const double price_for_discount = 100;
    const double _5pd = 5;
    const double _20pd = 20;
    const double art_std_price = 2.05;
    const double svk_std_price = 1.15;
    const double carr_std_price = 1.09;
    const double sale_over_hund = 0.05;
    const double price_for_delivery_below_5pd = 6.50;
    const double price_for_delivery_above5pd_under20pd = 14.00;
    const double price_for_delivery_above20pd_for1pd = 0.50;
    double mass_of_art = 0;
    double mass_of_svk = 0;
    double mass_of_carr = 0;
    char choice;
    double sum_mass = 0;
    double price_for_art = 0 ;
    double price_for_svk = 0 ;
    double price_for_carr = 0 ;
    double sum_price = 0;
    double discount = 0;
    double price_for_delivery = 0;
    double price_for_pd = 0;
    do
    {
        double temp_mass_of_art = 0;
        double temp_mass_of_svk = 0;
        double temp_mass_of_carr = 0;
        printf("Выберите желаему операцию:\n");
        printf("a) Указать вес артишоков\n");
        printf("b) Укажите вес свеклы\n");
        printf("c) Укажите вес маркови\n");
        printf("q) Закончить заказ\n\n");
        choice = getchar();
        switch (choice)
        {
        case 'a':
            printf("Укажите вес артишоков: ");
            scanf("%lf" , &temp_mass_of_art);
            mass_of_art += temp_mass_of_art;
            break;
        case 'b':
            printf("Укажите вес свеклы: ");
            scanf("%lf", &temp_mass_of_svk);
            mass_of_svk += temp_mass_of_svk;
            break;
        case 'c':
            printf("Укажите вес моркови: ");
            scanf("%lf" , &temp_mass_of_carr);
            mass_of_carr += temp_mass_of_carr;
            break;
        case 'q':
            goto printik;
        default:
            printf("Введите подходящие символы\n\n");
            break;
        }
    } while ( choice != 'q');
    printik : 
    sum_mass += mass_of_art + mass_of_carr + mass_of_svk;
    price_for_art = art_std_price * mass_of_art;
    price_for_carr = carr_std_price * mass_of_carr;
    price_for_svk = svk_std_price * mass_of_svk ;
    sum_price = price_for_art + price_for_carr + price_for_svk;
    if (sum_price >= price_for_discount)
    {
        discount = sum_price * (1 - sale_over_hund);
        sum_price -= discount;
    }
    if (sum_mass <= _5pd )
    {
        price_for_delivery = price_for_delivery_below_5pd;
    }
    else if (sum_mass > _5pd && sum_mass <= _20pd)
    {
        price_for_delivery = price_for_delivery_above5pd_under20pd;
    }
    else if (sum_mass > _20pd)
    {
        price_for_delivery = price_for_delivery_above5pd_under20pd + price_for_delivery_above20pd_for1pd * (sum_mass - _20pd);
    }
    price_for_pd = sum_price / sum_mass;
    printf("Стоимость фунта товара: %.2lf \n" , price_for_pd);
    printf("Количество заказанных фунтов: %.2lf \n" , sum_mass);
    printf("Стоимость артишоков: %.2lf \n" , price_for_art);
    printf("Стоимость свеклы: %.2lf \n" , price_for_svk);
    printf("Стоимость моркови: %.2lf \n" , price_for_carr);
    printf("Общая стоимость заказа: %.2lf \n" , sum_price);
    if (discount)
    printf("Скидка за сумму заказа: %.2lf \n" , discount);
    printf("Затраты на доставку: %.2lf \n" , price_for_delivery);
    printf("Итоговая сумма заказа с учетом всех затрать: %.2lf \n" , sum_price + price_for_delivery);
    return 0;
}