#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    //clrscr();
    printf("Please enter a number \n");
    scanf("%d",&a);
    if(a%13==0 && a%7==0)
    {
        printf("The number %d is divisibility by 13 and 7",a);

    }
    else
    {
        printf("The number  %d is not divisibility by 13 and 7",a);
    }
    

    getch();
}