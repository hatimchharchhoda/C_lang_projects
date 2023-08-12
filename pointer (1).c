#include<stdio.h>

int main()
{
long *p1,m=10;
char *p2,n='w';
float *p3,b=20.65;
p1=&m;

printf("%u %u \n",p1,&m);
printf("%ld %ld\n",*p1,m);
p1++;
printf("\nincreament %u\n",p1);
p2=&n;



printf("\n %u %u \n",p2,&n);
printf("%c \n",*p2);
p2++;
printf("%u \n",p2);

p3=&b;

printf("\n %u %u \n",p3,&b);
printf("%f\n",*p3);
p3++;
printf("%u \n",p3);

    return 0;
}