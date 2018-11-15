#include<stdio.h>
void swap();
void swap()
{
int a,b,c;
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("new value of b is %d",b);
printf("new value of a is %d",a);
}
int main()
{
swap();
return 0;
}
