#include<stdio.h>

int main()
{ int i,j,k;
  printf("              3D ARRAY\n\n");
  printf("No. of rows : ");
  scanf("%d",&i);
  printf("No. of columns : ");
  scanf("%d",&j);
  printf("No. of front rows : ");
  scanf("%d",&k);
int a[i][j][k],l,m,n;
  for(l=0;l<i;l++)
     {
     for(m=0;m<j;m++)
        {
        for(n=0;n<k;n++)
           {
           printf("enter values for matrix : ");
           scanf("%d",a[l][m][n]);
           }
        }
     }
  for(l=0;l<i;l++)
     {
     for(m=0;m<j;m++)
        {
        for(n=0;n<k;n++)
           {
           printf("%d%d%d\t%d",i,j,k,a[l][m][n]);
           }
        printf("\n");
        }
     printf("\n");     
     }
    return 0;
}