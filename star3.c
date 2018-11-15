#include<stdio.h>
int main()
{
int i,j,k;
printf("Enter number of rows: \n");
scanf("%d",&k);
for(i=1; i<=k; i++)
{
   for(j=1; j<=k; j++)
   {
   if(i==1||i==k||j==1||j==k||i%2==0&&j%2==0)
   printf("*");
   else
   printf(" ");
   }
printf("\n");
}
return 0;
}
