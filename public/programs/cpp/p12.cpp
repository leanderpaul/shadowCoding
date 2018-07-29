// Check whether a string is a palindrome or not

#include<iostream.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
 char str[100];
    int i, len;
    int flag = 0;
    
    cout<<"Enter a string:";
    cin>>str;
    
    len = strlen(str);
    
    for(i=0;i < len ;i++)
	{
        if(str[i] != str[len-i-1])
		{
            flag = 1;                                           //flag is set to 1 if any character is mismatched
            break;
        }
    }
    
    if (flag==1) {
        cout<<str<<" is not a palindrome";
    }    
    else {
        cout<<str<<" is a palindrome";
    }
}
	
