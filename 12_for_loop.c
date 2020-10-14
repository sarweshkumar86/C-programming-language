#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    //clrscr();
    printf("Enter a number you want to print \n");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        printf("%d \n",i);
    }
    getch();
}