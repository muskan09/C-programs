#include<stdio.h>
int main()
{
int n,x,d,o,e,r,z,m;
printf("enter number\n");
scanf("%d",&n);
m=n;
x=0;
while(m!=0)
{
m=m/10;
x++;       
}
printf("no of digits is %d\n",x);
while(n>0)
{
d=n%10;
n=n/10;
r=d%2;
o=o+d;
e=e+d;
}
z=o+e;
printf("sum is %d \n",z);
return 0;
}
