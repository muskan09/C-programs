#include<stdio.h>
struct student
{
int rn;
char name[50];
float marks;
};
int main()
{
int n,i;
printf("enter no of students");
scanf("%d",&n);
struct student s[100];
for(i=0;i<=n-1;i++)
{

scanf("%d",&s[i].rn);

scanf("%s",s[i].name);

scanf("%f",&s[i].marks);
}
for(i=0;i<=n-1;i++)
{
printf("%d \n",s[i].rn);
printf("%s \n",s[i].name);
printf("%f \n",s[i].marks);
}
return 0;
}
