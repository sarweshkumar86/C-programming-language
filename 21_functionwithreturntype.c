#include<stdio.h>
#include<conio.h>

int sum();

void main()
{
    int i;
    //clrscr();
    i=sum();
    printf("sum of two number is %d",i);
    getch();
}


int sum()
{
  int a,b;  
printf("Please enter two number \n");
scanf("%d%d",&a,&b);
return (a+b);

}