#include <iostream>
using namespace std;

int main() {
    int t=0;
    cin>>t;
	int a,b;
	while(t--){
    	cin>>a>>b;
    	if(a+b>6){
    	    cout<<"YES"<<endl;
    	}else{
    	    cout<<"NO"<<endl;
    	}
	}
	return 0;
}
