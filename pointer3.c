#include<stdio.h>
int main()
{
void *P;
char m;
P=&m;
printf("%c\n",P);
int n;
P=&n;
printf("%d\n",P);
return 0;
}
