#include<stdio.h>
int main()
{
int n,c,reverse=0,r,s,rev=0,z;
for(n=10;n<=100;n++)
{
z=n;
r=n*n;
printf("square of number entered %d\n",r);
while(c!=0)
{
reverse=reverse*10;
reverse=reverse+c%10;
c=c/10;
}
printf("reverse of the number entered is %d\n",reverse);
s=reverse*reverse;
printf("square of reverse number %d\n",s);
while(s!=0)
{
rev=rev*10;
rev=rev+s%10;
s=s/10;
}
printf("reverse of square of reverse number %d\n",rev);
if(s==rev)
{
printf("required number is %d",z);
}
}
return 0;
}
