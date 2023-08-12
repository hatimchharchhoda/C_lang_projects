#include<stdio.h>

int main()
{ int i;
 printf("            LODIN SYSTEM\n\n ");
char s1[100],s2[100],a[100],b[100],c[100];
printf("make your user id : ");
gets(s1);
printf("\n make your password : ");
gets(s2);
printf("\n confirm your password : ");
scanf("%s",b);
strcmp(s2,b);
if(strcmp(s2,b)==0)
printf("\n successfully registered");
else
{
printf("\nplease check your password ");
exit(0);
}
printf("\n\n\n SIGN IN");
printf("\n enter your user id : ");
scanf("%s",&a);
strcmp(s1,a);
if(strcmp(s1,a)==0)
printf("\n");
else 
{
printf("\nincorrect user id");
for(i=0;i<=10;i++)
{
printf("\n enter your user id : ");
scanf("%s",&a);
strcmp(s1,a);
if(strcmp(s1,a)==0)
{
printf("\n");
break;
}
else
printf("\n incorrect user id");
}
printf("try again later");
}
printf("\n enter your password : ");
scanf("%s",&c);
strcmp(s2,c);
if(strcmp(s2,c)==0)
printf("\n perfectly registered");
else 
{
printf("\nincorrect password ");
for(i=1;i<=10;i++)
{
printf("\n enter your password : ");
scanf("%s",&c);
strcmp(s2,c);
if(strcmp(s2,c)==0)
{
printf("\n perfectly registered");
exit(0);
}
else
printf("\n incorrect password");
}
printf("\n try again later");
}
    return 0;
}