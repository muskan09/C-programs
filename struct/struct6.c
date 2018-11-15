#include<stdio.h>
#include<math.h>
struct coord
{
int x1; 
int x2;
int y1;
int y2;
};
struct coord dist;
void func();

int main()
{
scanf("%d",&dist.x1);
scanf("%d",&dist.x2);
scanf("%d",&dist.y1);
scanf("%d",&dist.y2);
func();
return 0;
} 
void func()
{
int d= sqrt(((dist.x2-dist.x1)*(dist.x2-dist.x1))+((dist.y2-dist.y1)*(dist.y2-dist.y1)));
printf("the distance is %d",d);
}
