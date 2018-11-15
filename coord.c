#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,x;
printf("Enter a");
scanf("%f",&a);
printf("Enter b");
scanf("%f",&b);
printf("Enter c");
scanf("%f",&c);
printf("Enter d");
scanf("%f",&d);
printf("Enter e");
scanf("%f",&e);
printf("Enter f");
scanf("%f",&f);
x=sqrt(((b-a)*(b-a))+((d-c)*(d-c))+((f-e)*(f-e)));
printf("%f",x);
return 0;
}
