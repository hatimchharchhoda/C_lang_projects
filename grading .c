#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("\n enter percentage : ");
scanf("%d", &a);
if(a<40)
printf("you are fail");
else if (a<50)
printf("your grade is - C");
else if (a<60)
printf("your grade is - B");
else if (a<70)
printf("your grade is - A");
else if(a<100)
printf("your grade is - A+");
else 
printf("invalid input");
return 0;
}