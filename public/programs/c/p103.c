// Pattern printing (numbers)

#include<stdio.h>

int main()
{
	int n,value,d,i,j;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		value = i;
		d=n-1;
		for(j=1;j<=i;j++)
		{
			printf("%d ",value);
			value+=d;
			d--;
		}
		printf("\n");
	}
}
			