// Print odd numbers between a and b

#include<iostream.h>
using namespace std;

int main()
{
	int i,a,b;
	cout<<"Enter the numbers a and b";
	cin>>a>>b;
		for(i=a;i<=b;i++)
		{
			if(i%2!=0)
			{
				cout<<i<<" ";           // prints if the number is odd
			}
		}
}

	