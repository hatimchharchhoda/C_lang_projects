#include<stdio.h>

swap(int *m,int *n)
{
int tmp;
tmp=*m;
*m=*n;
*n=tmp;
printf("%d \t%d",*m,*n);
}

int main()
{
int a,b,*x,*y;
x=&a;
y=&b;
printf("enter two integers : ");
scanf("%d %d ",x,y);
swap(&a,&b);
    return 0;
}