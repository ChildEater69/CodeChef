#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if(a==1 || b==1 ||c==1||d==1){
	        cout<<"OUT"<<endl;
	    }else{
	        cout<<"IN"<<endl;
	    }
	}
	return 0;
}
