// Print numbers between a and b

#include<stdio.h>

int main()
{
	int i,a,b;                            // variable declaration
	printf("Enter the numbers a and b");
	scanf("%d %d",&a,&b);                // Gets the value of from the user                                  
	for(i=a;i<=b;i++)                   // loops untill the condition fails
	{
		printf("%d ",i);   // Prints current value of i
	}
}
