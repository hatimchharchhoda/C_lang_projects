#include<stdio.h>

int main()
{
int p,i,div,j;
//printf("enter a digit");
//scanf("%d",&p);

do
{
div=0;
printf("\n enter a digit : ");
scanf("%d",&p);

for(i=2;i<p;i++)
{
  if(p%i==0)
  {
    //printf("mod:%d",p%i);
    div=1;
    break;
  }
}
if(div==0)
{
printf("\n it is prime number");
}
else
{
printf("\n it is composite number");
//printf("\n enter a digit : ");
//scanf("%d",&p);
}
}while(div==1);
return 0;
}