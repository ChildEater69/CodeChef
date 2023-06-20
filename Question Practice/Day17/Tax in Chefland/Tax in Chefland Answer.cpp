#include <iostream>
using namespace std;

int main() {
	int t,a,res=0;
	cin>>t;
	while(t--){
	    cin>>a;
	    if(a<=100){
	        res=a;
	    }else{
	        res=a-10;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
