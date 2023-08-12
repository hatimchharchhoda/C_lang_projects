#include<stdio.h>
struct store
{
char name[10];
float price;
int quantity;
}*s;
void update(struct store *x,float p,int q)
{
 x->price +=p;
 x->quantity+=q;
}
 



main()
{
float p;
int q;
struct store item={"biscuits",23.5,100};
printf("increment of price : ");
scanf("%f",&p);
printf("increment of quantity : ");
scanf("%d",&q);
printf("before item:");
printf("%s %f %d",item.name,item.price,item.quantity);
update(&item,p,q);
printf("updated item:");
printf("%s %f %d",item.name,item.price,item.quantity);

    return 0;
}