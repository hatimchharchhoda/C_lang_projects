#include<stdio.h>

int fact(int)
{
int a,i,multi;
printf("enter value for evaluate factorial : ");
scanf("%d",&a);
multi=1;
for(i=1;i<=a;i++)
   {
   multi=i*multi;  
   }
printf("%d",multi);
return 0;
}

 main()
{
 int k;
    fact(k);
    return 0;
}