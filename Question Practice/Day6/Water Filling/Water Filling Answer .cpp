#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a==1 && b==1 && c==1){
	        cout<<"Not now"<<endl;
	    }
	    else if(a==1 && b==1 && c==0){
	        cout<<"Not now"<<endl;
	    }
	    else if(a==0 && b==1 && c==1){
	        cout<<"Not now"<<endl;
	    }
	    else if(a==1 && b==0 && c==1){
	        cout<<"Not now"<<endl;
	    }
	    else{
	        cout<<"Water filling time"<<endl;
	    }
	}
	return 0;
}
