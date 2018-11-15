#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a number a");
scanf("%d",&a);
printf("Enter a number b");
scanf("%d",&b);
printf("Enter a number c");
scanf("%d",&c);
(a>b)?((a>c)?printf("a is greatest"):printf("a is not greatest")):((b>c)?printf("b is greatest"):printf("c is greatest"));
return 0;
}
