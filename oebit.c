#include<stdio.h>
int main()
{
int a;
printf("enter a number a");
scanf("%d",&a);
(a&1)?printf("number is odd"):printf("number is even");
return 0;
}
