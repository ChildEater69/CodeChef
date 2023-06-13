#include <iostream>
using namespace std;

int main() {
	int a,i,b;
	cin>>a;
	while(a--){
	    cin>>b;
	    int arr[b];
	    int count=0;
	    for(int i=0;i<b;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<b;i++){
	        if(arr[i]>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;

}
