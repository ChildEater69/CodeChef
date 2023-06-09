#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cin>>c>>d;
        if(a>c || b>d){
            cout<<"IMPOSSIBLE"<<endl;
        }else if(a==c || b==d){
            cout<<"POSSIBLE"<<endl;
        }else if(a<c || b<d){
            cout<<"POSSIBLE"<<endl;
        }
        
    }
	return 0;
}
