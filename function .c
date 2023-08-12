#include<stdio.h>
int i;
void printline(char ch)
{
printf("\n");
for(i=0;i<38;i++)
   {
   printf("%c",ch);
   }
printf("\n");
}

main()
{   printline('*');
    printf("Hello world!");
    printline('#');
    printf("welcome to function");
    printline('%');
    printf("let's start"); 
    printline('$');
      return 0;
}