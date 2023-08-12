#include<stdio.h>
#include<conio.h>
int main()
{
int C,Ans;

printf("\n Check whether your birth year is an \n leap year or not");
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

printf("\n \n for yes press : 1 \n for no press : 2");
printf("\n Is your birth year comes in leap year? \n Ans :");
scanf("%d",&Ans);
switch (Ans)
{
case 1 : printf("\n  ✅️ \n THANK YOU FOR PARTICIPATING IN \n THIS SURVEY");
break;
case 2 : printf("\n  ❎️ \n THANK YOU FOR PARTICIPATING IN \n THIS SURVEY");
break;
default : printf(" *INVALID ANS* ");
}
return 0;
}