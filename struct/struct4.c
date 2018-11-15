#include<stdio.h>
#include<math.h>
struct coord
{
int x1; 
int x2;
int y1;
int y2;
};
void func(struct coord dist);

int main()
{
struct coord dist;
scanf("%d",&dist.x1);
scanf("%d",&dist.x2);
scanf("%d",&dist.y1);
scanf("%d",&dist.y2);
func(dist);
return 0;
} 
void func(struct coord dist)
{
int d= sqrt(((dist.x2-dist.x1)*(dist.x2-dist.x1))+((dist.y2-dist.y1)*(dist.y2-dist.y1)));
printf("the distance is %d",d);
}
//pass by value
