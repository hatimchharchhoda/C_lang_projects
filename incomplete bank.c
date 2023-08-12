#include<stdio.h>


struct bank
{
int accountno;
float balance;
}*b;

float credit-amount(struct bank *b,int a)
{
b->balance+=a;
}

float debit-amount(struct bank *d,int m)
{
d->balance-=m;
}






main()
{
float a,c;
printf("enter your account no. : ");
scanf("%d %f",&b.accountno, &b.balance);
printf("enter credited amount : ");
scanf("%f",&a);
credit-amount(struct bank b,a);
printf("%d %f",b.accountno,b.balance);
printf("");
printf("enter debited amount : ");
scanf("%f",&c);
debit-amount(struct bank b,c);
printf("%d %f",b.accountno,b.balance);

    return 0;
}