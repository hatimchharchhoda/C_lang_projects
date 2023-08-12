#include<stdio.h>
void printline()
{
int i;
printf("\n");
for(i=0;i<38;i++)
{
printf("*");
}
printf("\n");
}
main()
{   
    printline();
    printf("Hello world!");
    printline();
    printf("welcome to function");
    printline();
    printf("let's start");
    return 0;
}