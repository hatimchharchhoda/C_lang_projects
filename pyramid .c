#include<stdio.h>

int main()
{
    int i,j,p,sp;
    printf("enter number : ");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
     for(sp=1;sp<=p-i;sp++) 
      {
       printf(" ");
      }
    for(j=1;j<=i;j++)
    {
    printf("* ");
    }
    printf("\n");  
     
    }
    
    return 0;
}