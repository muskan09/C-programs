#include<stdio.h>
int(*fp)(int,int);
int add(int,int);
int main(){
fp = add;
printf("%d",fp(9,4));
return 0;
}

int add(int a,int b)
{
return (a+b);
}

