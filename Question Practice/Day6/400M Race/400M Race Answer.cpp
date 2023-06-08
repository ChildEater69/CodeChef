#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(((a) < (b)) && ((a)<(c))){
	        cout<<"ALICE"<<endl;
	    }else if(((b) < (a)) && (((b)<(c)))){
	        cout<<"BOB"<<endl;
	    }else if(((c) < (a)) && (((c)<(b)))){
	        cout<<"CHARLIE"<<endl;
	    }
	}
	return 0;
}
