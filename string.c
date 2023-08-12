#include<stdio.h>

int main()
{   char s1[2],s2[10];
    s1[0]='l';
    s1[1]='j';
    printf("%s",s1);
    
    
    char s[2]={'e','f'};
    printf("\n%s",s);
    printf("\n enter a string s2");
    //scanf("%s",s2);
    gets(s2);
    printf("\n%s",s2);
    return 0;
}