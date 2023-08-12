#include<stdio.h>

int main()
{
 int i,j,k,l,a3[3],a1[3]={10,20,30},a2[3];
a2[0]=100;
a2[1]=200;
a2[2]=300;
 for(i=0;i<3;i++)
  {
   printf("%d ",a1[i]);
   
  }
  
  printf("\n");
  for(i=0;i<3;i++)
  {
   printf("%d ",a2[i]);
   printf("\n");
  } 
  printf("\n value for k in a3[l] is : ");
  //scanf("%d",&k);
  for(i=0;i<3;i++)
    {
    scanf("%d",&a3[i]);
    }
    for(l=0;l<3;l++)
    {
    printf("%d ",a3[l]);
    }
    return 0;
}