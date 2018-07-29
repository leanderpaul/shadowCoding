// Prime number or not

#include<stdio.h>

int main()
{
	int i,n,flag;
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)                       //checks whether n is divisible by other number
		{
			flag=1;
			break;                        // goes outsidee first for loop
		}
	}
	if(flag==1)
	printf("%d is not a prime number",n);
    else
	printf("%d is a prime number",n);
}

		
			
			
		