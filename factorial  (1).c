#include<stdio.h>

int main()
{
  int i,j,multi;
  printf("              FACTORIAL");
  printf("\n \n find the factorial of : ");
  scanf("%d",&i);
  multi=1;
 for(j=i;j>=1;j--)
    {
      multi=multi*j;
    } 
     printf("\n ans : %d",multi);   
    return 0;
}