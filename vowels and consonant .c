#include<stdio.h>

int main()
{
char alphabet;
printf("vowel or consonant \n");
printf("\n enter alphabet : ");
scanf("%c",&alphabet);
switch(alphabet)
{
case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' : printf(" \n it is vowel");
break;
default : printf(" \n it is consonant");
}
    return 0;
}