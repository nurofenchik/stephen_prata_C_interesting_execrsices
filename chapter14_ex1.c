#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct month
{
    char name[15];
    char abbrv[4];
    int days;
    int number;
};
struct month months[12] =
{
    { "January" , "Jan" , 31 , 1} ,
    { "February" , "Feb" , 28 , 2} ,
    { "March" , "Mar" , 31 , 3} ,
    { "April" , "Apr" , 30 , 4} ,
    { "May" , "May" , 31 , 5} ,
    { "June" , "Jun" , 30 , 6} ,
    { "July" , "Jul" , 31 , 7} ,
    { "August" , "Aug" , 31 , 8} ,
    { "September" , "Sep" , 30 , 9} ,
    { "October" , "Oct" , 31 , 10} ,
    { "November" , "Nov" , 30 , 11} ,
    { "December" , "Dec" , 31 , 12}, 
};
int days_to_month(const char* monthname)
{
    int sum_days = 0;
    int j = 0;
    for(int i = 0 ; i < 12 ; i++)
    {
        if (strcmp(monthname , months[i].name) == 0)
        {
            j = i;
            break;
        }
        else{
            printf("work trouble");
            exit(EXIT_FAILURE);
        }
    }
    for(int i = 0 ; i < j + 1 ; i++)
    {
        sum_days += months[i].days;
    }
    return sum_days;
}
int main(){
    char monthname[20];
     printf("Введите название месяца\n");
     scanf("%s" , monthname);
     printf("%d" , days_to_month(monthname));
     return 0;
}