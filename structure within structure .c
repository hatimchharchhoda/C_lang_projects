#include<stdio.h>

struct name
{
char firstn[10];
char middlen[10];
char lastn[10];
}n;

struct employee
{
int id;
struct name ename;
}en;

struct customer
{
int no;
struct name cname;
}cn;





main()
{
printf("\nenter employee names : \n");
scanf("%d %s %s %s",&en.id,en.ename.firstn,en.ename.middlen,en.ename.lastn);
printf("%d %s %s %s",en.id,en.ename.firstn,en.ename.middlen,en.ename.lastn);   
    
printf("\nenter coustumer names : \n");
scanf("%d %s %s %s",&cn.no,cn.cname.firstn,cn.cname.middlen,cn.cname.lastn);
printf("%d %s %s %s",cn.no,cn.cname.firstn,cn.cname.middlen,cn.cname.lastn);       
    
    
    
    return 0;
}