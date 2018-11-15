#include<stdio.h>
int main()
{
int m,n,s;
printf("enter a variable n");
scanf("%d",&n);
printf("enter a variable m");
scanf("%d",&m);
s=m;
while(n!=m-1)
{
s=s+n;
n--;
}
printf("%d",s);
return 0;
}
