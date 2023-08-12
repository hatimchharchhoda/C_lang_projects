#include<stdio.h>

int main()
{
  int i,j,a,b[i],flag;
  printf("how much no. of data you have? \n -> ");
  scanf("%d",&a);  
  for(i=0;i<a;i++)
    { printf("%d",i);
     printf("enter the data : ");
     scanf("%d",&b[i]);
    }
    printf("is the entering value having in the given data : ");
    scanf("%d",&j);
    flag=0;
    for(i=0;i<a;i++)
    {
     if(j==b[i])
       {
       flag=1;
       printf("%d-%d",i,b[i]);
       break;
       }
    }
     if(flag==1)
     printf("\n search is found");
     else 
     printf("\n search doesn't found");
    return 0;
}