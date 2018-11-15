#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a number a \n");
scanf("%d%",&a);
b=a%10;
c=a/10;
d=b*10+c;
printf("reverse digit is %d",d);
return 0;
}
