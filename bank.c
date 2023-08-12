#include<stdio.h>


struct bank
{
int accountno;
float balance;
};

float creditamount(struct bank *b,int a)
{
b->balance+=a;
}

float debitamount(struct bank *d,int m)
{
d->balance-=m;
}


main()
{
float a,c;
struct bank b;
printf("enter your account no. and balance : ");
scanf("%d %f",&b.accountno, &b.balance);
printf("enter credited amount : ");
scanf("%f",&a);
creditamount(&b,a);
printf("%d %f",b.accountno,b.balance);
printf("");
printf("enter debited amount : ");
scanf("%f",&c);
debitamount(&b,c);
printf("%d %f",b.accountno,b.balance);

    return 0;
}