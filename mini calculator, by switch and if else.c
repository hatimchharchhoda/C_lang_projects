#include<stdio.h>
#include<conio.h>
int main()
{
float A,B;
int C;
printf("\n MINI CALCULATOR");
printf("\n Use following integers for different operations \n 1. for addition \n 2. for subtraction \n 3. for multiplication \n 4. for division");
printf("\n enter value of A : ");
scanf("%f",&A);
printf("\n enter value of B : ");
scanf("%f",&B);
printf("\n enter interger according to your \n operation :  ");
scanf("%d",&C);
switch(C)
{
case 1  : printf("%f",A+B);
break;
case 2 : 
if(A>B)
printf("%f",A-B);
else
printf("%f",B-A);
break;
case 3 : printf("%f",A*B);
break;
case 4 :
if(A>B)
printf("%f",A/B);
else
printf("%f",B/A);
break;
default: printf("\n INVALID OPERATOR❗️❗️");
}
return 0;
}