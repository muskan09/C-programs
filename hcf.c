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
if(a<b)
{
printf("hcf is %d",a);
}

else
{
printf("hcf is  %d",b);
}
}
else
{
printf("hcf is 1");
}
return 0;
}
