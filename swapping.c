#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a variable a");
scanf("%d",&a);
printf("enter a variable b");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("new value of b is %d",b);
printf("new value of a is %d",a);
return 0;
}
