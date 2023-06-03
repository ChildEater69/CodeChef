#include <iostream>
using namespace std;

int main() {
	int t;
	int a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(c >=a && c < b){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
