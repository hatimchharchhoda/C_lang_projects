#include<stdio.h>

int main()
{
    int i,j,p,sp;
    printf("enter number : ");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
    for(j=1;j<=i;j++)
    {
    printf("%d",i);
    }
    printf("\n");  
    
    }
    
    return 0;
}