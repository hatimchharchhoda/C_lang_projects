#include<stdio.h>

int main()
{ int i,n;
  printf("gow much no. of data you want to enter : ");
  scanf("%d",&n); 
int j,a[n];
  for(j=0;j<n;j++)
  {
    printf("enter the value for a[j] : ");
    scanf("%d",&a[j]);  
  }
int tmp;
   for(j=0;j<n;j++)
  { 
    for(i=j+1;i<=n;i++)
    {
      if(a[j]>a[i])
      {
       tmp=a[j];
       a[j]=a[i];
       a[i]=tmp;
    
      }
    }
  }
printf("\nsorted a[j] : ");
for(j=0;j<i;j++)
  {
    printf("%d ",a[j]);  
  }
     return 0;
}