// Fibonacci series

#include<iostream.h>
using namespace std;

int main()
{
	int n,i;
	int n1,n2,n3;
	cout<<"Enter a number:";
	cin>>n;
	
	n1=0;
	n2=1;
	cout<<n1<<n2;
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}
}
		
		