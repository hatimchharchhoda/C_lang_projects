#include<stdio.h>

int main()
{
int p,i,div,j;
//printf("enter a digit");
//scanf("%d",&p);
div=0;
printf("\n enter a digit : ");
scanf("%d",&p);
for(i=2;i<p;i++)
{
if(p%i==0)
{
div=1;
break;
}
if(div==0)
{
printf("\n it is prime number");
}
else
{
printf("\n it is consonant number");
//printf("\n enter a digit : ");
//scanf("%d",&p);
}

return 0;
}