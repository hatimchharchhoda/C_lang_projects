#include<stdio.h>
#include<conio.h>
int main()
{
printf("1. for addition \n 2. for subtraction(a>b) \n 3. for division \n 4. for multiplication \n 5. for subtraction(b>a)");
int a,b;
char y;
printf(" \n enter character value : ");
scanf("%c",&y);
printf("\n enter first digit : ");
scanf("%d", &a);
printf("\n enter second digit : ");
scanf("%d", &b);
if(y=='1')
printf("%d",a+b);
else if (y=='2')
printf("%d",a-b,a>b);
else if (y=='3')
printf("%d",a/b);
else if (y=='4')
printf("%d",a*b);
else if(y=='5')
printf("%d",b-a,b>a);
else 
printf("invalid input");
return 0;
}