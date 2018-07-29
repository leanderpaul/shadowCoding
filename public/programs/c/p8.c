// Prime number generation

#include<stdio.h>

int main()
{
	int i,n,j,flag=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		flag=0;
	for(j=2;j<i/2;j++)
	{
		if(i%j == 0)                       //checks whether n is divisible by other number
		{
			flag=1;
			break;                        // goes outsidee first for loop
		}
	}
	if (flag==0)
	{
    printf("%d ",i);
	}
    }
}
