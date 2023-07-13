#include <iostream>
using namespace std;

int main() {
	int t,a,x,y;
	cin>>t;
	while(t--){
	    cin>>a>>x>>y;
	    if((a+1)*y<x){
	        cout<<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
