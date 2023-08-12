#include<stdio.h>

int add(int m,int n)
{
printf("%d",m+n);
}

main()
{
int *a,*b,x,y;
printf("enter two values : ");
a=&x;
b=&y;
scanf("%d %d",&x,&y);
add(*a,*b);
    return 0;
}