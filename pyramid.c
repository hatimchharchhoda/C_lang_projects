#include<stdio.h>

int main()
{ int i,j,k;
for(i=1;i<=5;i++)
  {
  
for(j=1;j<=5-i;j++)
   {
printf(" ");
}
 for(j=1;j<=i;j++)
  {
    if(j%2==0)
    printf(" %d",j+i);   
    else
    printf(" %d",j); 
   }
  printf("\n");
  }
    return 0;
}