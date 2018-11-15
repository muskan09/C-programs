#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-(4*x)-9)
int main()
 {
 int i=0;
 float a,b,e,x,y;
 printf("enter the desire accuracy= ");
 scanf("%f",&e);
       do
       {
                printf("enter the values of a : ");
                scanf("%f",&a); 
                    printf("enter the values of b : ");
                scanf("%f",&b);  
       }
       while(f(a)*f(b)>0);
       do
       {
                         x=a-(b-a)/(f(b)-f(a))*f(a);
                         if(f(x)*f(a)>0)
                         b=x;
                         else
                         a=x;
                         i=i+1;
                         }
       while(fabs(f(x))>e);
       printf("the values of i and x are : %d,%f",i,x);
      return 0;
 }
