#include<stdio.h>

int main()
{
int i,sum;
sum=0;
i=1;
while(i<=100)
{
sum=(sum+i);
i=i+1;
}
printf("%d",sum);
    return 0;
}