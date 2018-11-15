#include<stdio.h>
int main()
{
int a,b;
printf("enter a variable a");
scanf("%d",&a);
printf("enter a variable b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a %d",a);
printf("b %d",b);
return 0;
}
