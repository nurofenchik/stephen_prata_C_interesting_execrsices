#include <stdio.h>
#include <string.h>
void func1(void)
{
    printf("Hello\n");
}
void func2(void)
{
    printf("Привет\n");
}
void func3(void)
{
    printf("Салам\n");
}
void func4(void)
{
    printf("Bonjour\n");
}
int main(void)
{
    void (*funcptr[4])(void) = { func1 , func2 , func3 , func4};
    int choice = 0;
    printf("Выбрите язык на котором печатать \"ПРИВЕТ\" (-1 для выхода)\n");
    printf(" 1 : English \n 2 : Russian \n 3 : Uzbek \n 4 : France \n");
    scanf("%d" , &choice);
    while (choice != -1)
    {
        if(choice >= 1 && choice <= 4)
        { funcptr[choice-1]();
        }
        else{
            printf("Введите значение от 1 до 4\n");
        }
        printf("Выбрите язык на котором печатать \"ПРИВЕТ\"\n (-1 для выхода)");
        printf("1 : English \n 2 : Russian \n 3 : Uzbek \n 4 : France \n");
        scanf("%d" , &choice);
    }
    return 0;
}