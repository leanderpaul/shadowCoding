// Geometric Progression

#include<iostream.h>
#include<math.h>
using namespace std;

int main()
{
	int i,n,a,r;
	cout<<"GEOMETRIC PROGRESSION....\n";
	cout<<"Enter first term:";
	cin>>a;
	cout<<"\nEnter common ratio:";
	cin>>r;
	cout<<"\nEnter n:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<a*(pow(r,i-1))<<" ";              //GP sequence is a,ar,ar^2,ar^3..........ar^(n-1)
		
	}
}
	