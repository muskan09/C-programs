#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x*x*x)-18)
int main()
{
   float a=0,b=0,error=0,c,d;
   int i=0;
   printf("input interval");
   scanf("%f%f",&a,&b);
   if((f(a)*f(b)>0)
{
printf("invalid interval");
}
else if(f(a)==0||f(b)==0)
{
printf("root is %f\n",f(a)==0?a:b);
}
do
{
a=c;
c=(((a*f(b)-(b*f(a)))/(f(b)-f(a))));
printf("%2d\t%f\t%f\t%f\t%f\t,i++,a,b,c,f(c));
if(f(c)==0)
{
break;
}
else if(f(a)*f(c)<0)
{
b=c;
}
else if(a=c) 
{
error=fabs(c-d);
}
else if(i==1)
{
printf("\n");
}
else
{
printf("%f\n",error);
}
}
while(error>0.00005)
printf("root is%f\n",c);
return 0;
}

printf("output is %f",x);
return 0;
}
