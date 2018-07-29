// Arithmetic Progression

#include<iostream.h>
using namespace std;

int main()
{
	int i,n,a,d,last;
	cout<<"ARITHMETIC PROGRESSION....\n";
	cout<<"Enter first term:";
	cin>>a;
	cout<<"\nEnter difference:";
	cin>>d;
	cout<<"\nEnter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a<<" ";                      //AP sequence is a,a+d,a+2d.........a+(n-1)d
		a=a+d;
	}
}
	