#include<stdio.h>
int main()
{
	int n,i;
	for(i>=1; i<=500; i++)
	{
		n=i%5;
		if(n==0)
		{
			printf("%d is a factor of five",n);
		}
	}
return 0;
}

