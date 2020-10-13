#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    //clrscr();
    printf("Please enter a number \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number %d is even",a);

    }
    else
    {
        printf("The number  %d odd",a);
    }
    

    getch();
}