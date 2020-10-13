#include<stdio.h>
#include<conio.h>
void main()
{
    int g;
    int a;
    
   // clrscr();
    printf("Please enter your grade \n");
    scanf("%d",&g);
     printf("Please enter your age \n");
    scanf("%d",&a);
    

    if(a>15 && g==1)
    {
        printf("you are eligible \n");

    }
    else
    {
        printf("You are not eligible \n");
    }
    

    getch();
}