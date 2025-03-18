#include <stdio.h>
#include <string.h>
//to diff the pointers to funcs
double func1(double x , double y);
double func2(double x , double y);
double func3(double x , double y);
double func4(double x , double y);
int main(void)
{
    //first
    double (*pfun1)(double , double);
    double (*pfun2)(double , double);
    double (*pfun3)(double , double);
    double (*pfun4)(double , double);
    double (*pointers[4]) = { pfun1 , pfun2 , pfun3 , pfun4};
    //
    //second!!!!!!!!
    double (*pf1[4])(double , double) = { func1 , func2 , func3 , func4};
    //
    //third!!!!!!!!!!
    typedef double (*ptype)(double , double);
    ptype pf[4] = {func1 , func2 , func3 , func4};
    //
    //
}
//
// to diff the pointers to structs
struct fullname
{
    char fname[20];
    char lname[20];
};
struct bard
{
    struct fullname name;
    int born;
    int died;
};
struct bard willie;
struct bard *pt = &willie;
int main()
{
    willie.born = 1;
    pt->born = 1;
    scanf("%d" , &pt->born);
    scanf("%s" , willie.name.lname);
    scanf("%s" , pt->name.lname);
    willie.name.lname[2];
    strlen(willie.name.fname) + strlen(willie.name.lname);
}

