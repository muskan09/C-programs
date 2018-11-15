#include<stdio.h>
int main()
{
int n,s;
printf("enter a variable n");
scanf("%d",&n);
s=0;
while(n!=0)
{
s=s+n;
n--;
}
printf("sum of first n nos is %d",s);
return 0;
}
