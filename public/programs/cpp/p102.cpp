// Pattern printing (Alphabets)


#include<iostream.h>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter number:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<char(65+i);
		}
		cout<<"\n";
	}
}