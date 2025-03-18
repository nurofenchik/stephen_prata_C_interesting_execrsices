#include <stdio.h>
#include <string.h>
#define CSIZE 4
struct name
{
    char first_name[40];
    char last_name[40];
};
struct student
{
    struct name n;
    float grade[3];
    float average_grade;
};
void input_student_grades(struct student *ptr)
{
    for(int j = 0 ; j < CSIZE ; j++)
    {
    char studname[40];
    float grade1 , grade2 , grade3;
    printf("Введите имя студента и его оценки:\n");
    printf("Имя студента: ");
    scanf("%s" , studname );
    printf("\nВведите 3 оценки студента:\n");
    scanf("%f %f %f" , &grade1 , &grade2 , &grade3);
    for(int i = 0 ; i < CSIZE ; i++)
    {
        if( strcmp((*(ptr+i)).n.first_name, studname) == 0  )
        {
            (*(ptr+i)).grade[0] = grade1;
            (*(ptr+i)).grade[1] = grade2;
            (*(ptr+i)).grade[2] = grade3;
        }
    }
    }
}
void input_average_grade(struct student *ptr)
{
    for(int i = 0 ; i< CSIZE ; i++)
    {
        (*(ptr+i)).average_grade = ( (*(ptr+i)).grade[0] + (*(ptr+i)).grade[1] + (*(ptr+i)).grade[2] ) / 3;
    }
}
void print_struct(struct student *ptr)
{
    for(int i = 0 ; i < CSIZE ; i++)
    {
        printf("STUDENT : %s %s , GRADES : %.f %.f %.f , AVERAGE_GRADE: %.2f\n" , (*(ptr+i)).n.first_name ,(*(ptr+i)).n.last_name , (*(ptr+i)).grade[0] , (*(ptr+i)).grade[1] , (*(ptr+i)).grade[2] , (*(ptr+i)).average_grade);
    }
}
int main()
{
    struct student array[CSIZE] = 
    {
        { {"Alisher" , "Morgenshtern"} , {0 , 0 , 0} , 0 },
        { {"Ramin" , "Jawadi"} , {0,0,0} , 0 },
        { {"Alexander" , "Huy"} , {0,0,0} , 0 },
        { {"Natalya" , "Ezhova"} , {0,0,0} , 0},
    };
    input_student_grades(array);
    input_average_grade(array);
    print_struct(array);
}