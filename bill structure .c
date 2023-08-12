#include<stdio.h>

 struct bill
{
int items;
char name[10];
float price;
int productno;
}b1,b2,b3;

main()
{
struct bill b1,b2,b3;
printf("enter data of items,name,price,product no : ");
scanf("%d %s %f %d",&b1.items,b1.name,&b1.price,&b1.productno);
scanf("%d %s %f %d",&b2.items,b2.name,&b2.price,&b2.productno);
scanf("%d %s %f %d",&b3.items,b3.name,&b3.price,&b3.productno);

printf("\n%d \t%s \t%f",b1.items,b1.name,b1.price,&b1.productno);
printf("\n%d \t%s \t%f",b2.items,b2.name,b2.price,&b2.productno);
printf("\n%d \t%s \t%f",b3.items,b3.name,b3.price,&b3.productno);
       return 0;
}