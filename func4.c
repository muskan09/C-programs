#include<stdio.h>
void hcf(int a,int b)
{
int i,gcd;
for(i=1; i<=a && i<=b; i++)
{
if(a%i==0 && b%i==0)
{
gcd=i;
}
}
printf("the gcd is %d",gcd);
}
int main()
{
int a,b;
printf("enter two integers a and b");
scanf("%d%d",&a,&b);
hcf(a,b);
return 0;
}
