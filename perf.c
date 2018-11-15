#include<stdio.h>
int main()
{
int a,b,i,s;
printf("Enter number\n");
scanf("%d",&a);
s=0;
for(i=1;i<=a-1;i++)
{
b=a%i;
if(b==0)
{
s=s+i;
}
}
if(s==a)
{
printf("perfect number is %d:\n",a);
}
else
printf("its not a perfect number");
return 0;
}
