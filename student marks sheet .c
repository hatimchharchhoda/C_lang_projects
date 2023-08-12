#include<stdio.h>

struct student
{
int roll;
char name[10];
int marks[3];
int total;
};


 main()
{
struct student x[3];
int i,j;
for(i=0;i<3;i++)
   {
   printf("enter your roll no. : ");
   scanf("%d",&x[i].roll);
   printf("enter your name : ");
   scanf("%s",x[i].name);
   printf("enter your marks of 3 subjects :\n");
   x[i].total=0;
   for(j=0;j<3;j++)
      {
      printf("student-marks[%d] :",j+1);
      scanf("%d",&x[i].marks[j]);
      x[i].total=x[i].total+x[i].marks[j];
      }
   }
printf("roll no.\tname\ttotal\n★☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
for(i=0;i<3;i++)
   {
   printf("%d\t \t%s\t %d\n",x[i].roll,x[i].name,x[i].total);
   }

    return 0;
}