// Print numbers between a and b

#include<iostream.h>
using namespace std;

int main()
{
	int i,a,b;                            // variable declaration
	cout<<"Enter the numbers a and b";
	cin>>a>>b;                           // Gets the value of from the user                                  
	for(i=a;i<=b;i++)                   // loops untill the condition fails
	{
		cout<<i<<" ";   // Prints current value of i and leaves a space for next instance
	}
}
