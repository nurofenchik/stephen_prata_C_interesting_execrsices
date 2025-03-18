#include <stdio.h>
#include <string.h>
struct person;
struct medicine;
void print_struct(struct medicine human);
struct person
{
    char firstname[20];
    char surname[20];
    char lastname[20];
};
struct medicine
{
    struct person persona;
    int card_number;
};
int main()
{
    struct medicine data[5] = 
    {
        { { "Alexander" , "Dmitrievich" , "Haldin"} , 12345 },
        { { "Nurislam" , "Anvarovich" , "Iarmukhamedov"} , 77777} ,
        { { "Biba" , "Bibovich" , "Bibanov"} , 228},
        { { "Huilo" , "Huilovich" , "Huilanov"} , 1337},
        { { "Alisher" , "" , "Morgenshtern"} , 999},
    } ;
    for(int i = 0 ; i < 5 ; i++)
    {
        print_struct(data[i]);
    }
    return 0;
}
void print_struct(struct medicine human)
{
    if (strlen(human.persona.surname) > 1)
    {
        printf("%s , %s %.1s. -- %d\n" , human.persona.lastname , human.persona.firstname , human.persona.surname , human.card_number);
    }
    else 
    {
        printf("%s , %s -- %d\n" , human.persona.lastname , human.persona.firstname  , human.card_number);
    }
}