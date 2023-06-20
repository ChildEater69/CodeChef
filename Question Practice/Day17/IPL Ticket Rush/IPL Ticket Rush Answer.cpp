#include <iostream>
using namespace std;

int main() {
	int t,a,b,res=0;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a<b){
	        res=0;
	    }else{
	        res=a-b;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
