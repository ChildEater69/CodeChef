#include <iostream>
using namespace std;

int main() {
	int t,i,j;
	cin>>t;
	while(t--){
	    cin>>i>>j;
	    if(i>j){
	        cout<<"CAR"<<endl;
	    }else if(i<j){
	        cout<<"BIKE"<<endl;
	    }else{
	        cout<<"SAME"<<endl;
	    }
	}
	return 0;
}
