// Arithmetic Progression

#include<stdio.h>

int main()
{
	int i,n,a,d,last;
	printf("ARITHMETIC PROGRESSION....\n");
	printf("Enter first term:");
	scanf("%d",&a);
	printf("\nEnter difference:");
	scanf("%d",&d);
	printf("\nEnter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);                      //AP sequence is a,a+d,a+2d.........a+(n-1)d
		a=a+d;
	}
}
	