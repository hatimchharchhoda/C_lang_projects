#include<stdio.h>

int p,q,z;
int add(int p , int q)
{

return p+q;
}
main()
{
printf("enter two value : ");
 scanf("%d",&p);
 scanf("%d",&q);
 printf("p+q = %d",add(p,q));
printf("\n \n");
z=add(p,q);
printf("p+q = %d",z);
    return 0;
}