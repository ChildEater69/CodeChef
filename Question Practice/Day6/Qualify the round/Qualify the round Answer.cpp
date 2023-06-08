#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a <= b+2*c){
            cout<<"Qualify"<<endl;
        }else{
            cout<<"NotQualify"<<endl;
        }
    }
	return 0;
}
