#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    //clrscr();
    printf("1.First floor \n2.Scound floor\n3.Third floor \n");
    printf("Please enter your floor numer \n");
    scanf ("%d",&a);
    switch(a)
    {
    case 1: printf("you are in floor number 1");
    break;
    case 2: printf("you are in floor number 2");
    break;
    case 3: printf("you are in floor number 3");
    break;
    
    defaul: printf("Please enter valid floor number \n");

    }
    getch();
}