#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-(2*x)-5)
int main()
{
int i,u,v;
float a,b,x,y,z;
i=1;
while(i>0)
{
a=i;
b=i+1;
if(f(a)*f(b)<0)
{
break;
}
i++;
}
u=f(a);
v=f(b);
while(fabs(a-b)>0.0001)
{
y=(a*v)-(b*u);
z=v-u;
x=y/z;
if(f(x)<0)
a=x;
else
b=x;
printf("itration=%f\n",x);
}
return 0;
}
