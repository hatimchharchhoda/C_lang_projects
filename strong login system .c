#include<stdio.h>
#include<conio.h>
int main()
{ int i,d;
 printf("            LODIN SYSTEM\n\n ");
char f,p,ch,s1[100],s2[100],a[100],b[100],c[100];
printf("make your user id : ");
gets(s1);
do{
printf("\n make your password : ");
gets(s2);
if(strlen(s2)<8)
continue;
d=0,f=0,p=0;
for(i=strlen(s2);i>=0;i--)
{
if(isdigit(s2[i]))
d++;
if(isalpha(s2[i]))
f++;
if(ispunct(s2[i]))
p++;
}

if(d==0 || f==0 || p==0)
{
printf("make a strong password");
continue;
}

printf("\n confirm your password : ");
scanf("%s",b);
if(strcmp(s2,b)==0)
printf("\n successfully registered");
else
{
printf("\nplease check your password ");
}
ch=getchar();
}

while(strcmp(s2,b));
clrscr();
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