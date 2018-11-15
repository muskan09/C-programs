#include<stdio.h>
struct student
{
double marks; 
char name[50];
int rollno;
};
int main()
{
struct student info;
scanf("%lf",&info.marks);
scanf("%s",info.name);
scanf("%d",&info.rollno);
printf("%lf \n %s \n %d \n",info.marks,info.name,info.rollno);
return 0;
} 
