#include<stdio.h>
int main()
{
int a[20],i=0,j=0,n,t;
printf("size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(j=0;j<(n-1);j++)
{
  for(i=0;i<(n-1);i++)
  {
    if(a[i+1]<a[i])
    {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
  }
}
printf("asec order");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("desc order");
for(i=n;i>0;i--)
{
printf("%d",a[i-1]);
}
return 0;
}

