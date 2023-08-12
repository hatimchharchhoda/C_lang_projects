#include<stdio.h>

int main()
{   int i,j,b[2][2];
    printf("               2D ARRAY");
    int a[3][2]={1,2,3,4,6,7};
    printf("\n");
    for(i=0;i<3;i++)
      {  
        for(j=0;j<2;j++)
        {
         printf("\t%d",a[i][j]);
        }
        printf("\n");
      }
    printf("\n \n \n");
    
   
    b[0][0]=11;
    b[0][1]=12;
    b[1][0]=13;
    b[1][1]=14;
    for(i=0;i<2;i++)
       {
         for(j=0;j<2;j++)
         {
          printf("\t%d",b[i][j]);
         }
        printf("\n");
       }
    printf("\n \n");
    
   int k,l,c[i][j];
   printf("enter no. of rows : ");
   scanf("%d",&k);
   printf("\nenter no. of columns : ");
   scanf("%d",&l);
   for(i=0;i<k;i++)
      {
       for(j=0;j<l;j++)
         {
          printf("enter the value of matrix : ");
          scanf("%d",&c[i][j]);
         }
      }
    printf("\n");
    for(i=0;i<k;i++)
      {
       for(j=0;j<l;j++)
         {
          
          printf("\t%d",c[i][j]);
         }
       printf("\n");
      }
        
    return 0;
}