#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=0;
    //clrscr();
    printf("Enter a number you want to print \n");
    scanf("%d",&a);
     
      while (i<=a)
      {
          printf("%d \n",i);
          i++;
      }
    
    getch();
}