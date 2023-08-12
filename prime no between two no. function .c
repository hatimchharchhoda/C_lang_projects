#include<stdio.h>

int primeno(int a)
{
int j,flag=1;
for(j=2;j<a;j++)
   {
   if(a%j==0)
     {
     flag=0;
     break;
     }
   }  
return flag;
}

main()
{
int p,q,tmp,i,flag;
printf("enter two positve integer : ");
scanf("%d %d",&p,&q);
if(p>q)
   {
   tmp=p;
   p=q;
   q=tmp;
   }
printf("prime no. between %d and %d : ",p,q);
for(i=p+1;i<q;++i)
   {
   if(i%2!=0)
   {
   flag=primeno(i);
   if(flag==1)
    {
     printf("\t%d",i);
    }
   }
  }

    return 0;
}