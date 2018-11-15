#include<stdio.h>
union p
{
int x;
int y;
};
int main()
{
union p a;
a.x=2;
printf("%d",a.x);
a.y=4;
printf("%d",a.y);
printf("%d",a.x);
return 0;
}
