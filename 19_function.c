#include<stdio.h>
#include<conio.h>

void sum();

void main()
{
    //clrscr();
    sum();
    getch();
}


void sum()
{
  int a,b;  
printf("Please enter two number \n");
scanf("%d%d",&a,&b);
printf("sum of two number is %d",(a+b));

}