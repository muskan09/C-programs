#include<stdio.h>
struct s1
{
char name;
int roll;
float marks;
};
struct s2
{
char name;
char section;
int roll;
float marks;
};
struct s3
{
char name;
char section;
int roll:5;
float marks;
};
int main()
{
struct s1 a;
struct s2 b;
struct s3 c;
printf("%ld\n",sizeof(a.roll));
printf("%ld\n",sizeof(b.roll));
printf("%ld\n",sizeof(struct s1));
printf("%ld\n",sizeof(struct s2));
printf("%ld\n",sizeof(struct s3));
return 0;
}

