#include <iostream>
using namespace std;

int main() {
	int t,i,j;
	cin>>t;
	while(t--){
	    cin>>i>>j;
	    if(i*15>=2*j){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
