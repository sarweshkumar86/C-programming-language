#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char source[20]="Hello";
    char target[20]="world";

    //clrscr();
    printf("source value of is %s \n",source);
    printf("target value is %s \n",target);
    strcat(source,target);
    printf("Example of concatination %s\n",source);
    printf("example of stringcopy %s \n",strcpy(source,target));
    printf("string lenght is %d \n",strlen(source));
     printf("string lower case function is %s \n",strlwr(source));
     printf("string upper case function is %s \n",strupr(source));
     printf("string recerse the string is %s \n",strrev(source));
     

    getch();
}