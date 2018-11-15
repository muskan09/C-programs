#include<stdio.h>
int fact(int n);
int main()
{
int num,result;
printf("enter num");
scanf("%d",&num);
result=fact(num);
printf("factorial is %d",result);
}
int fact(int x)
{
if(x!=1)
{
return x*fact(x-1);
}
else
return 1;
}
