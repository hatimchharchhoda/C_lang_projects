#include<stdio.h>

struct hotel
{
int id;
char name[10];
int price;
}


main()
{
struct hotel x[3];
int i,f;
for(i=0;i<3;i++)
   {
   printf("enter hotel id : ");
   scanf("%d",&x[i].id);
   printf("enter hotel name : ");
   scanf("%s",x[i].name);
   printf("enter hotel price : ");
   scanf("%d",&x[i].price);
   }
printf("\napply filter price : ");
scanf("%d",&f);
printf("\nhotel recommended after applying filter :\n");
printf("\nid\t hotel\t price\n○•••••••••••••••••••••••••••••••○\n");
for(i=0;i<3;i++)
   {
   if(x[i].price<f)
     printf("%d\t %s\t %d\n",x[i].id,x[i].name,x[i].price);
   }
}