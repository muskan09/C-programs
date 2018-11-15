#include<stdio.h>
void array(int a[5]);
void array(int x[5])
{
for(int i=0; i<5; i++)
{
printf("%d",x[i]);
}
}
int main()
{
int a[5]={1,2,3,4,5};
array(a);
return 0;
}
