#include<stdio.h>
int main()
{
int a;
printf("enter any number a");
scanf("%d",&a);
switch(a%2==0)
{
case 1:printf("number is even");
break;
default:printf("number is odd");
}
return 0;
}
