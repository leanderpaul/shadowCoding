// Pattern printing (numbers)

#include<iostream.h>
using namespace std;

int main()
{
	int n,value,d,i,j;
	cout<<"Enter number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		value = i;
		d=n-1;
		for(j=1;j<=i;j++)
		{
			cout<<value<<" ";
			value+=d;
			d--;
		}
		cout<<"\n";
	}
}
			