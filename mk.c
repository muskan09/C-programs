#include<stdio.h>
int main()
{
/*
int a[5]={1,2,3,4,5};
printf("%d",a[0]);
printf("%d",a[1]);
printf("%d",a[2]);
printf("%d",a[3]);
printf("%d",a[4]);
*/
int n,i,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i=0)
{
c++;
}
}
if(c==2)
printf("Prime");
else
printf("Not Prime");
return 0;
}
