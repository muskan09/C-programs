#include<stdio.h>
#include<math.h>
#define f(x) ((a*x*x)+(b*x)+c)
int main()
{
float a,b,c,y,z,x;
printf("enter a variable a \n");
scanf("%f",&a);
printf("enter a variable b \n");
scanf("%f",&b);
printf("enter a variable c \n");
scanf("%f",&c);
if(f(x)==0)
{
   y=(-b+sqrt(b*b-4*a*c))/2*a;
   z=(-b-sqrt(b*b+4*a*c))/2*a;
   printf("first root of the eqn is %f \n",y);
   printf("second root of the eqn is %f \n",z);
}
else
{
   printf("enter new values...real roots dont exist");
}
return 0;
}
