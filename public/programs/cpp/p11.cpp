// Check whether is a palindrome or not

#include<iostream.h>
using namespace std;

int main()
{
	int n,r=0,k;
	cout<<"Enter a number";
	cin>>n;
	
	k=n;                           // assigning n value to k as logic involves alteration of n's value
	while(k!=0)
	{
		r = r*10;                             
		r = r + k%10;                         
		k = k /10;
	}
	
	if(n==r)
	{
		cout<<n<<"is a palindrome";
	}
	else{
		cou<<n<<"is not a palindrome";
	}
}

		