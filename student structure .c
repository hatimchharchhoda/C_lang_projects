#include<stdio.h>

struct student
{
int id;
char name[20];
float marks;
}s={1,"abc",87.6};

main()
{
   struct student s1,s2;
printf("\n");
s1.id=2;
strcpy(s1.name,"ghi");
s1.marks=54;
printf("\n write your id,name,marks : ");
scanf("%d %s %f",&s2.id,s2.name,&s2.marks);
printf("%d %s %f",s2.id,s2.name,s2.marks);
   return 0;
}