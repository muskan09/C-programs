#include<stdio.h>
struct number
{
int a; 
int b;
int c;
};
int main()
{
struct number n;
scanf("%d",&n.a);
scanf("%d",&n.b);
scanf("%d",&n.c);
(n.a>n.b)?((n.a>n.c)?printf("a is greatest"):printf("a is not greatest")):((n.b>n.c)?printf("b is greatest"):printf("c is greatest"));
return 0;
} 
