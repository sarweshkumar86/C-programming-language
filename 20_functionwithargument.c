#include<stdio.h>
#include<conio.h>

void sum(int a,int b);

void main()
{
    //clrscr();
int x,y;  
printf("Please enter two number \n");
scanf("%d%d",&x,&y);
    sum(x,y);
    getch();
}


void sum(int a,int b)
{
  
printf("sum of two number is %d",(a+b));

}