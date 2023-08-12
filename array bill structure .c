#include<stdio.h>

 struct bill
{
int items;
char name[10];
float price;
int productno;
}b[1000];

main()
{
int i,c;
printf("enter no. of items : ");
scanf("%d",&c);

printf("enter data of items,name,price,product no : ");
for(i=1;i<=c;i++)
{
scanf("%d %s %f %d",&b[i].items,b[i].name,&b[i].price,&b[i].productno);
//scanf("%d %s %f %d",&b2.items,b2.name,&b2.price,&b2.productno);
//scanf("%d %s %f %d",&b3.items,b3.name,&b3.price,&b3.productno);
}
for(i=1;i<=c;i++)
{
printf("\n%d \t%s \t%f \t%d",b[i].items,b[i].name,b[i].price,b[i].productno);
//printf("\n%d \t%s \t%f",b2.items,b2.name,b2.price,&b2.productno);
//printf("\n%d \t%s \t%f",b3.items,b3.name,b3.price,&b3.productno);
}
           return 0;
}