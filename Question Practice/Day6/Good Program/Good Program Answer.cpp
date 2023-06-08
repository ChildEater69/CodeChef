#include <iostream>
using namespace std;

int main() {
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        if(a%4!=0){
            cout<<"Not Good"<<endl;
        }else{
            cout<<"Good"<<endl;
        }
        
    }
	
	return 0;
}
