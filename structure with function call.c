#include<stdio.h>

 struct bill
{
int items;
char name[10];
float price;
int productno;
}b1,b2,b3;

void ipstruct(struct bill *b1)
{
printf("enter data of items,name,price,product no : ");
scanf("%d %s %f %d",&b1->items,b1->name,&b1->price,&b1->productno);
//printf("\n%d \t%s \t%f \t%d",b1.items,b1.name,b1.price,b1.productno);
}
void opstruct(struct bill b1)
{
printf("\n%d \t%s \t%f \t%d",b1.items,b1.name,b1.price,b1.productno);
}
main()
{
struct bill b2,b3;

ipstruct(&b2);
ipstruct(&b3);


printf("printing bills\n");
opstruct(b2);
opstruct(b3);
    return 0;
}