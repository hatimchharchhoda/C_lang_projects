#include<stdio.h>
#include<conio.h>
int main()
{
int C;
char Ans,Submit;
printf("for yes press : 1 \n for no press : 2 \n if you don't know : 3");
printf("\n Is your birth year comes in leap year? \n Ans :");
scanf("%c",&Ans);
switch (Ans)
{
case 1 : printf("  ✅️ \n THANK YOU FOR PARTICIPATING IN THIS SURVEY");
break;
case 2 : printf("  ❎️ \n THANK YOU FOR PARTICIPATING IN THIS SURVEY");
break;
case 3 : printf("\n Check whether your birth year is an leap year or not");
printf("\n enter year : ");
scanf("%d",&C);
if(C%4)
{
printf("\n The year is not an leap year");
}
else
{
printf("\n The year is leap year");
}
printf("\n Now submit your answer by entering, \n 4 for yes \n 5 for no");
switch(Submit)
{
case 4 : printf("  ✅️ \n THANK YOU FOR PARTICIPATING IN THIS SURVEY");
break;
case 5 : printf("  ❎️ \n THANK YOU FOR PARTICIPATING IN THIS SURVEY");
break;
default : printf("INVALID ANS");
}
break;
default : printf(" *INVALID ANS* ");
}
return 0;
}