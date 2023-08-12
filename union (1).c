#include<stdio.h>

union patient
{
int id;
char name[20];
float bill;
}p1;





main()
{
printf("enter any of your id,name,bill : ");
scanf("%f",&p1.bill);
printf("%f",p1.bill);
   return 0;
}