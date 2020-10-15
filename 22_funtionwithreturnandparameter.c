#include<stdio.h>
#include<conio.h>

int sum(int a,int b);

void main()
{
    //clrscr();
int x,y,i;  
printf("Please enter two number \n");
scanf("%d%d",&x,&y);
 i =sum(x,y);
printf("sum of two number is %d",(i));

    getch();
}

int sum(int a,int b)
{
  
return(a+b);
}