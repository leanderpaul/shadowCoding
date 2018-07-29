// Geometric Progression

#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,a,r;
	printf("GEOMETRIC PROGRESSION....\n");
	printf("Enter first term:");
	scanf("%d",&a);
	printf("\nEnter common ratio:");
	scanf("%d",&r);
	printf("\nEnter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%.0f ",a*(pow(r,i-1)));              //GP sequence is a,ar,ar^2,ar^3..........ar^(n-1)
		
	}
}
	