#include<stdio.h>

int main()
{
	int a=1,b=1,c;
	int n=10;
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
