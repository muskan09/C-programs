#include<stdio.h>
int main()
{
int *P,num;
num=1;
scanf("%d",&num);
P=&num;
printf("%d\n",*P);
printf("%d\n",P);
printf("%d\n",&num);
printf("%d\n",num);
return 0;
}
