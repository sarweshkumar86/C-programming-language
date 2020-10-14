#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int a[2][2]={10,20,30,40};
 //clrscr();
    for(i=0;i<2;i++)
   {   
   for(j=0;j<2;j++)
    {
        printf(" value of arr[%d][%d] is = %d \t",i,j,a[i][j]);
    }
    printf("\n");
    }
    getch();
}