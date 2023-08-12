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
int i,k;
printf("enter your account no. and balance : ");
scanf("%d %f",&b.accountno, &b.balance);
do
{
printf("\nfor credit-amount press-1 \n for debit-amount press-2 \n for finishing your process press-3 \n : ");
scanf("%d",&k);
switch(k)
{
case 1 :printf("\nenter credited amount : ");
        scanf("%f",&a);
        creditamount(&b,a);
        printf("\n%d %f",b.accountno,b.balance);
        break;
case 2 : 

printf("\nenter debited amount : ");
scanf("%f",&c);
debitamount(&b,c);
printf("%d %f\n",b.accountno,b.balance);

break;
case 3 : 

printf("\nfinal balance : %f",b.balance);
break;

}
}while(k<3);
    return 0;
}