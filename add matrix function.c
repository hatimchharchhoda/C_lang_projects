#include<stdio.h>

void ipmatrix(int a[],int s)
{
int j;
printf("\nenter the matrix of size %d:",s);
// no., %d times : ",i);
for(j=0;j<s;j++)
   {
   
   scanf("%d",&a[j]);

   }
printf("\n");
}

void printmatrix(int a[],int s)
{
int j;
printf("\nprint matrix:");
for(j=0;j<s;j++)
   {
   
   printf("\t%d",a[j]);

   }
printf("\n");
}
int addmatrix(int a[],int b[],int s)
{
int i;

for(i=0;i<s;i++)
   {
   printf("\t%d",a[i]+b[i]);
   }


}

main()
{
 int c[5],b[5],size;
scanf("%d",&size);
  ipmatrix(c,size);
printmatrix(c,size);
ipmatrix(b,size);
printmatrix(b,size);
addmatrix(c,b,size);
    return 0;
}