// Print odd numbers between aand b

#include<stdio.h>

int main()
{
	int i,a,b;
	printf("Enter the numbers a and b");
	scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(i%2!=0)
			{
				printf("%d ",i);           // prints if the number is odd
			}
		}
}

	