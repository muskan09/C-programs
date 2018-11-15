#include<stdio.h>
#define f(x) ((x*x*x)-(4*x)-9)
int main()
{
float a,b,x,d;
int i;
printf("enter a variable a \n");
scanf("%f",&a);
printf("enter a variable b \n");
scanf("%f",&b);
d=(a+b)/2;
for(i=1;i<=4;i++)
{

x=(a+b)/2;
if(f(x)<0)
{a=x;
}
else
{b=x;
}
}
printf("value of a is %f \n",a);
printf("value of b is %f \n",b);
printf("midpoint is %f \n",d);
printf("output is %f \n",x);
return 0;
}
