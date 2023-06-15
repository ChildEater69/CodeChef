#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int count = 0, count1 = 0;
	    int n;
	    cin>>n;
	    while(n--){
		string s;
		cin>>s;
		if(s=="START38"){
		    count++;
		}else if(s=="LTIME108"){
		    count1++;
		}
	}
	cout << count << " " << count1 << endl;
}
	return 0;
}
