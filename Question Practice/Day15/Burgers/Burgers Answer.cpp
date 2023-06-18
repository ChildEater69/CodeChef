#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin >>t;
	while(t--)
	{
	    cin >>a >>b;
	    if(a>b)
	    c=b;
	    else if(a<b)
	    c=a;
	    else 
	    c=b;
	    cout<<c;
	    cout<<"\n";
	}
	return 0;
}