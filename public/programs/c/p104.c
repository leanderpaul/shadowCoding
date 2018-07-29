// Pattern printing (*) for array of numbers

#include<stdio.h>

int main()
{
	int n,n1[10],i,j,max=0,l;
	printf("Enter n:");
	scanf("%d",&n);
	printf("\n Enter numbers:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&n1[i]);
	if(n1[i]>max)
		max=n1[i];
	}
	l=max;
	for(i=0;i<l;i++)
	{	
	for(j=0;j<n;j++)
	{
		if(n1[j]>=max)
		{
			printf("* ");
			
		}
		else{
			printf("  ");
		}
	}
	max--;
	printf("\n");
	}

}


		
		