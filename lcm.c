#include<stdio.h>
int main()
{
int a,b,c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
if(a%b==0||b%a==0)
{
if(a>b)
{
printf("lcm is %d",a);
}
else
{
printf("lcm is  %d",b);
}
}
else
{
c=a*b;
printf("lcm is %d",c);
}
return 0;
}
