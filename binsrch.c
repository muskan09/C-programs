#include<stdio.h>
int main()
{
int i,first,last,middle,n,search,array[100];
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter %d integers",n);
for(i=0; i<=n; i++)
{
scanf("%d",&array[i]);
printf("enter value to find \n");
scanf("%d",&search);
first=0;
last=n-1;
middle=((first+last)/2);
}
while(first<=last)
{
if(array[middle]<search)
{
first=middle+1;
}
else if(array[middle]==search)
