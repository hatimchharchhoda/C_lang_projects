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
scanf("%d %s %f",&p1.id,p1.name,&p1.bill);
printf("%d %s %f",p1.id,p1.name,p1.bill);
   return 0;
}