#include<stdio.h>
#include<string.h>
int main()
{
char s[20],char t[20],x;
gets(s);
gets(t);
x= strstr(s,t);

printf("%d",x);

return 0;
}
