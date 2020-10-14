#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=1;
    //clrscr();
    printf("Enter a number you want to print :");
    scanf("%d",&a);
    do
    {
        printf("%d \n",i);
        i++;
    }
     while (i<=a);
    
    getch();
}