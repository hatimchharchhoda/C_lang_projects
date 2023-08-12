#include<stdio.h>
#include<conio.h>
int main()
{
int A,B,C,D;

printf("COMPUTER EXAM");
printf("\n \n \n ● which is a famous online bookstore \n 1. www.amazon.com \n 2. www.irctc.com \n 3. tradeindia.com \n 4. bidstall.com  \n Ans : ");
scanf("%d",&A);
switch(A)
{
case 1 : printf("    ✅️");
break;
case 4 :
case 2 :
case 3 : printf("    ❎️");
break;
default: printf("INVALID ANS❗️❗️ \n PLZ CHOICE CORRECT OPTION");
}
printf("\n \n \n ● which block is generally used to clean up at the end of executing a try block \n 1. retry    2. finally \n 3. try      4. catch \n Ans : ");
scanf("%d",&B);
switch(B)
{
case 3 : printf("    ✅️");
break;
case 1 :
case 2 :
case 4 : printf("    ❎️");
break;
default: printf("INVALID ANS❗️❗️ \n PLZ CHOICE CORRECT OPTION");
}
printf("\n \n \n ● In JavaScript, is NaN(123) function returns what? \n 1. -1      2. 123 \n 3. true    4. false \n Ans : ");
scanf("%d",&C);
switch(C)
{
case 4 : printf("    ✅️");
break;
case 1 :
case 2 :
case 3 : printf("    ❎️");
break;
default: printf("INVALID ANS❗️❗️ \n PLZ CHOICE CORRECT OPTION");
}
printf("\n \n \n ● Which extension is used in LaTex file? \n 1. .lex    2. .tex \n 3. .tel    4. .let \n Ans :  ");
scanf("%d",&D);
switch(B)
{
case 2 : printf("    ✅️");
break;
case 1 :
case 4 :
case 3 : printf("    ❎️");
break;
default: printf("INVALID ANS❗️❗️ \n PLZ CHOICE CORRECT OPTION");
}
return 0;
}