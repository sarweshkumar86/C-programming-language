#include<stdio.h>
#include<conio.h>
void main()
{
	
char ch;
char str[20];
float flt;
int no;
double dbl;
//clrscr();
printf("Enter a single char \n");
scanf("%c",&ch);
printf("Enter a  word \n");
scanf("%s",&str);
printf("Enter a float or friction value \n");
scanf("%f",&flt);
printf("Enter  integer value \n");
scanf("%d",&no);
printf("Enter a double value \n");
scanf("%lf",&dbl);



printf("character is %c \n",ch);
printf("string value  is %s \n",str);
printf("float value is %f \n",flt);
printf("int value is %d \n",no);
printf("double value  is %lf \n",dbl);


getch();
}
