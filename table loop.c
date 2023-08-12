#include<stdio.h>

int main()
{
    int i,p;
    printf("enter number : ");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
    if((i*5)%10==0)
    printf("5*%d=%d",i,5*i);
    printf("\n");    
    }
    
    return 0;
}