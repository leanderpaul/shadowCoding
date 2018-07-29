// Print day when n given using switch case

#include<iostream.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number"; 
	cin>>n;
	switch(n)                                // switch case
	{
		default:cout<<"Invalid";break;       // default statement given first in switch case saves cost of execution in worst case scenario
		case 1:cout<<"Sunday";break;
		case 2:cout<<"Monday";break;
		case 3:cout<<"Tuesday";break;
		case 4:cout<<"Wednesday";break;
		case 5:cout<<"Thursday";break;
		case 6:cout<<"Friday";break;
		case 7:cout<<"Saturday";break;
		
	}
}

	