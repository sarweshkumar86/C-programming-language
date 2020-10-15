#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int age;
    char city[20];
};

void main()
{
    struct student stu;
    //clrscr();
    printf("Please enter student name, age and city \n");
    scanf("%s%d%s",&stu.name,&stu.age,&stu.city);
    printf("your name is %s \n",stu.name);
    printf("your age is %d \n",stu.age);
    printf("your name is %s \n",stu.city);

    getch();
}