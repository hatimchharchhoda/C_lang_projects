#include<stdio.h>

void ipmatrix(int a[],int s)
{
int i,j;
printf("enter the matrix of size %d:",s);
// no., %d times : ",i);
for(j=0;j<s;j++)
   {
   
   scanf("%d",&a[j]);
   }
}

void printmatrix(int a[],int s)
{
int i,j;
printf("print matrix:");
for(j=0;j<s;j++)
   {
   
   printf("\t%d",a[j]);
   }
}

main()
{
 int c[10],size;
scanf("%d",&size);
  ipmatrix(c,size);
printmatrix(c,size);
    return 0;
}