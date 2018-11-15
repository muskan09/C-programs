#include<stdio.h>
int main()
{
int binary=0,base=1,n,sum;
printf("enter number");
scanf("%d",&n);
while(n!=0)
{
sum=n%2;
binary=binary+(sum*base);
base=base*10;
n=n/2;
}
printf("%d",binary);
return 0;
}
