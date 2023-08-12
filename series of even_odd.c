#include<stdio.h>

int main()
{
int i;
printf("\n SERIES OF EVEN NUMBERS \n \n ");
i=0;
while(i<=100)
{
printf("%d", i);
i=i+2;
}
printf("\n \n \n SERIES OF ODD NUMBERS \n \n ");
i=1;
while(i<=100)
{
printf("%d", i);
i=i+2;
}
    return 0;
}