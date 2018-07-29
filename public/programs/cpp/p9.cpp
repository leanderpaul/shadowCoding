// Prime number or not

#include<iostream.h>
using namespace std;

int main()
{
	int i,n,flag;
	cout<<"Enter the number";
	cin>>n;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)                       //checks whether n is divisible by other number
		{
			flag=1;
			break;                        // goes outsidee first for loop
		}
	}
	if(flag==1)
	cout<<n<<"is not a prime number";
    else
	cout<<n<<"is a prime number";
}

		
			
			
		