#include<stdio.h>
int main()
{
int mat[10][10];
int i,j;
for(i=0;i<=3;i++)
{
for(j=0;j<=4;j++)
{
printf("enter value of mat[%d][%d]:",i,j);
scanf("%d",&mat[i][j]);
}
printf("\n");
}

for(i=0;i<=3;i++)
{
for(j=0;j<=4;j++)
{
printf("mat[%d][%d]=%d\n",i,j,mat[i][j]);
}
}
return 0;
}
