#include<stdio.h>

int main()
{
int *p,m=7;
p=&m;
printf("%d",*p);
printf("\n %u %u",&p,&m);
    return 0;
}