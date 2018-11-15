#include<stdio.h>
int main()
{
int x,y,n;
printf("Enter a number x");
scanf("%d",&x);
printf("enter the nth number of bit you want");
scanf("%d",&n);
y=x>>(n-1);
(y&1)?printf("bit is 1"):printf("bit is 0");
return 0;
}
