#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int x,y;cin>>x>>y;
	    int maxMedicines = x / y;
        cout << maxMedicines << endl;
	}
	return 0;
}
