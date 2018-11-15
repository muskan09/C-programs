#include<stdio.h>
int main()
{
int a,b;
printf("enter a number a");
scanf("%d",&a);
printf("enter a number b");
scanf("%d",&b);
while(b!=a)
{
if(b%2==0){
printf("number is even");
}
else{printf("number is odd");}
b--;
}
return 0;
}
