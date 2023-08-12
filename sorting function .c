#include<stdio.h>

void input(int m[10])
{
int i;
printf("\nstart entering 5 values");
for(i=0;i<10;i++)
   {
   scanf("%d",&m[i]);
   }
}
void sort(int n[10])
{
int i,j,tmp;
for(i=0;i<10;i++)
   {
   for(j=i+1;j<10;j++)
      {
      if(n[i]>n[j])
        {       
        tmp=n[i];
        n[i]=n[j];
        n[j]=tmp;
        }
      }
   }
}
 main()
{
   int p[10],i;
input(p);
printf("\nstart printing 5 values");
for(i=0;i<10;i++)
    {
    printf("\t%d",p[i]);
    }
sort(p);
printf("\nsorted 5 values");
for(i=0;i<10;i++)
   {
   printf("\t%d",p[i]);
   }
    return 0;
}