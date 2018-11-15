#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100],ch,str[5];
int i=0,j=0,m=0;
printf("enter the string");
gets(a);
printf("enter the character to be deleted");
scanf("%c",&ch);
while(a[i]==ch)
{
if(a[i]==ch)
{
i++;
}
b[j]=a[i];
i++;
j++;
}
b[i]='\0';
puts(b);
return 0;
}

