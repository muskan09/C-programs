#include<stdio.h>
int main()
{
int n, reverse=0,r,s,rev=0,z;
printf("enter a number to reverse \n");
scanf("%d",&n);
z=n;
r=n*n;
printf("square of number entered %d\n",r);
if(n>=10 && n<=100)
{
while(n!=0)
{
reverse=reverse*10;
reverse=reverse+n%10;
n=n/10;
}
printf("reverse of the number entered is %d\n",reverse);
}
s=reverse*reverse;
printf("square of reverse number %d\n",s);
while(r!=0)
{
rev=rev*10;
rev=rev+r%10;
r=r/10;
}
printf("reverse of square of reverse number %d\n",rev);
if(s==rev)
{
printf("required number is %d",z);
}
else
{
printf("try a new case!");
}
return 0;
}
