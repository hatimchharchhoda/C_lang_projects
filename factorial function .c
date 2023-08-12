#include<stdio.h>

int fact(int a)
{

if(a==1)
return 1;
else
return a*fact(a-1);
}

 main()
{
 int k;
printf("enter value for evaluate factorial : ");
scanf("%d",&k);
    printf("%d",fact(k));
    return 0;
}