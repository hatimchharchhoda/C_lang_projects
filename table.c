#include<stdio.h>

int main()
{
int j,i,n;
printf("enter integer : ");
scanf("%d",&n);
while(n>0)
{

for(i=1;i<=10;i++)
{
printf("%d*%d=%d",n,i,i*n);
printf("\n");
}

printf("enter integer : ");
scanf("%d",&n);
}
return 0;
}