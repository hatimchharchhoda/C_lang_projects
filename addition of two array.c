#include<stdio.h>

int main()
{
 int a1[3],a2[3];
 int i,j;
  for(i=0;i<3;i++)
   {
       printf("\n enter value for array 1 : ");
       scanf("%d",&a1[i]);
   }
  for(i=0;i<3;i++)
   {
       printf("\n enter value for array 2 : ");
       scanf("%d",&a2[i]);
   }
  for(i=0;i<3;i++)
   printf("\n %d ",a1[i]+a2[i]);
    return 0;
}