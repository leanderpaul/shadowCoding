// Prime number generation

#include<iostream.h>
using namespace std;

int main()
{
	int i,n,j,flag=0;
	cout<<"Enter the number";
	cin>>n;
	for(i=3;i<=n;i++)
	{
		flag=0;
	for(j=2;j<i/2;j++)
	{
		if(i%j == 0)                       //checks whether n is divisible by other number
		{
			flag=1;
			break;                        // goes outsidee first for loop
		}
	}
	if (flag==0)
	{
    cout<<i<<" ";
	}
    }
}
