#include <iostream>
using namespace std;

int main() {
	int t,a,b,count=0;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if( a*b > 9999 && a*b <=99999){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
