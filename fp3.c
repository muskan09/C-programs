#include<stdio.h>
int operate(int* operatefp(int,int),int,int);
int add(int,int);
int main(){
operate(add,9,4);
printf("%d",result);
return 0;
}
int add (int a,int b){
return (a+b);
}

int operate(int* operatefp(int,int),int a,int b)
{
int result = (*operatefp)(a,b);
return (result);
}


