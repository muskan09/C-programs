#include<stdio.h>
int main()
{
double i,j,n;
printf("enter value of n");
scanf("%lf",&n);
j=0;
for(i=1;i<=n;i++)
{
	j=j+(i/(1+i));
}
printf("the sum is %lf:",j);
return 0;
}
