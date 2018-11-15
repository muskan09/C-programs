#include<stdio.h>
#define f(x) ((x*x*x)-(4*x)-9)
int main()
{
   float a,b,x;
   int u,e,i;
   printf("enter no of stages \n");
   scanf("%d",&e);
   for(u=0;f(u)<=0;u++)
   {
      a=u-1;
      b=u;
   }
   for(i=1;i<=e;i++)
   {
      x=(a+b)/2;
      if(f(x)<0)
      {
         a=x;
      }
      else
      {
         b=x;
      }
   }
printf("value of x is %0.3f \n",x);
return 0;
}
