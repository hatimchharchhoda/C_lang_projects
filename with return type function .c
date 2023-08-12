#include<stdio.h>

int p;
char q;
float r,w;
int add()
{
printf("enter no.: ");
scanf("%d",&p);
return 0;
}
char myscanchar()
{
printf("enter char. : ");
scanf("%c",&q);
return q;
}
float myscanfloat()
{
printf("enter two decimal no. : ");
scanf("%f %f",&r,&w);
return 0;
}









int i;
char y[5],b;
main()
{
for(i=0;i<5;i++)
{
y[i]=myscanchar();
}
puts(y);
add();
printf("%d \n",p);

myscanfloat();
printf("%f",r+w);
    return 0;
}