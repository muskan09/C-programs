#include<stdio.h>
struct number
{
int r1; 
int r2;
int c1;
int c2;
};
int main()
{
struct number n;
scanf("%d",&n.r1);
scanf("%d",&n.r2);
scanf("%d",&n.c1);
scanf("%d",&n.c2);
int rs=n.r1+n.r2;
int cs=n.c1+n.c2;
printf("%d + %di",rs,cs);
return 0;
} 
