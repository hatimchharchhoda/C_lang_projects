#include<stdio.h>

int main()
{
 int a;
 float r,l; 
 printf("Choose the option for finding area \n 1. area of circle \n 2. area of rectangle \n 3. area of triangle \n 4. area of cylinder \n Select : ");
 scanf("%d",&a);
  switch(a)
  {
   case 1 : printf("\n enter value for radius : ");
            scanf("%f",&r);
            printf("\n ans : %f",3.14*r*r);
            break;
   case 2 : printf("\n enter value for length : ");
            scanf("%f",&r);
            printf("\n enter value for breadth : ");
            scanf("%f",&l);
            printf("\n ans : %f",l*r);
            break;
   case 3 : printf("\n enter value for base : ");
            scanf("%f",&r);
            printf("\n enter value for height : ");
            scanf("%f",&l);
            printf("\n ans : %f",0.5*l*r);
            break;
   case 4 : printf("\n enter value for radius : ");
            scanf("%f",&r);
            printf("\n enter value for height : ");
            scanf("%f",&l);
            printf("\n ans : %f",2*3.14*l*r);
            break;
  }
    return 0;
}