#include <iostream>
using namespace std;

int main() {
	int i,j,t;
	cin>>t;
	while(t--){
	    cin>>i>>j;
	    if(j<=((i*107)/100)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
