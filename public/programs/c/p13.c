// Fibonacci series

#include<stdio.h>

int main()
{
	int n,i;
	int n1,n2,n3;
	printf("Enter a number:");
	scanf("%d",&n);
	
	n1=0;
	n2=1;
	printf("%d %d ",n1,n2);
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		
	}
}
		
		