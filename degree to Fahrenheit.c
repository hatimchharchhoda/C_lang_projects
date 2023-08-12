#include<stdio.h>
#include<conio.h>
int main()
{

float D,C;
printf("enter °C or °F : ");
scanf("%f",&C);
printf("Converting °C to °F \n press 1 \n Converting °F to °C \n press 2 \n enter : ");
scanf("%f",&D);
if(D==1)
printf("%f",(C-32)*0.555);
else if(D==2)
printf("%f",1.8*C+32);
else
printf("error❗️❗️ \n make a choice only from 1 or 2");
return 0;
}