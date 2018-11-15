#include<stdio.h>
#include<math.h>
void hyp(int a, int b);
void hyp(int a,int b)
{
int c;
c= sqrt((a*a)+(b*b));
printf("hypotenuse is %d",c);
}
int main()
{
int a,b;
printf("enter values of ht and base"); 
scanf("%d%d",&a,&b);
hyp(a,b);
return 0;
}
