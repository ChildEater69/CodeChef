#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<=3)
	    {
	        cout<<"BRONZE"<<endl;
	    
	    }
	    else if(3<x&&x<=6)
	    {
	        cout<<"SILVER"<<endl;
	    }
	    else if(x>6)
	    {
	        cout<<"GOLD"<<endl;
	    }
	}
	return 0;
}