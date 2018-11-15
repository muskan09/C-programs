#include<stdio.h>
int main()
{
int m;
m=10;
int *P=&m;
*P=20;
printf("%d\n",m+1);
printf("%d\n",P);
printf("%d\n",P+1);
printf("%d\n",m);
printf("%d\n",P++);
printf("%d\n",++P);
return 0;
}
