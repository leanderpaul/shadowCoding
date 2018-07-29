// Check whether is a palindrome or not

#include<stdio.h>

int main()
{
	int n,r=0,k;
	printf("Enter a number");
	scanf("%d",&n);
	
	k=n;                           // assigning n value to k as logic involves alteration of n's value
	while(k!=0)
	{
		r = r*10;                             
		r = r + k%10;                         
		k = k /10;
	}
	
	if(n==r)
	{
		printf("%d is a palindrome",n);
	}
	else{
		printf("%d is not a palindrome",n);
	}
}

		