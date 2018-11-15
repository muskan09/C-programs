#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,y,z,d;
printf("enter a variable a \n");
scanf("%f",&a);
printf("enter a variable b \n");
scanf("%f",&b);
printf("enter a variable c \n");
scanf("%f",&c);
d= ((b*b)-(4*a*c));
y=(-b+sqrt(d))/2*a;
z=(-b-sqrt(d))/2*a;
printf("first root of the eqn is %f \n",y);
printf("second root of the eqn is %f \n",z);
return 0;
}
