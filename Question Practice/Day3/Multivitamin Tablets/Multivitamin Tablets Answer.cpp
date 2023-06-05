#include <iostream>
using namespace std;

int main() {
    int t,i,j;
    cin>>t;
    while(t--){
        cin>>i>>j;
        if(3*i<=j){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
	return 0;
}
