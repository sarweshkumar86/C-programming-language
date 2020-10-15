#include<stdio.h>
#include<conio.h>
void main()
{
    int a=50,*ptr;
    //clrscr();
    ptr=&a;
    printf("pointer pointing address of variable %d",*ptr);
    getch();
}