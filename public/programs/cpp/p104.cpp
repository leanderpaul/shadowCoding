// Pattern printing (*) for array of numbers

#include<iostream.h>
using namespace std;

int main()
{
	int n,n1[10],i,j,max=0,l;
	cout<<"Enter n:";
	cin>>n;
	cout<<"\n Enter numbers:";
	for(i=0;i<n;i++)
	{
	cin>>n1[i];
	if(n1[i]>max)
		max=n1[i];
	}
	l=max;
	for(i=0;i<l;i++)
	{	
	for(j=0;j<n;j++)
	{
		if(n1[j]>=max)
		{
			cout<<"* ";
			
		}
		else{
			cout<<"  ";
		}
	}
	max--;
	cout<<"\n";
	}

}


		
		