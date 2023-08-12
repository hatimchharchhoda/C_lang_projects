#include<stdio.h>

int main()
{
int i,j,rip;
printf("enter number of rows");
scanf("%d",&rip);
//printf("enter number of columns");
//scanf("%d",&cip);
for(i=1;i<=rip;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}