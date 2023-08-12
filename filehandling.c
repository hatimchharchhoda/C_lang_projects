#include<stdio.h>

int main()
{
char ch;
 FILE *fp;
fp=fopen("test.txt","w");
ch=getchar();
fputc(fp,ch);
fclose(fp);
    return 0;
}