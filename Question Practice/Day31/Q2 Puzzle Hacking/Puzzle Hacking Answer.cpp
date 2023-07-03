#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    int count = 0;
	    
	    if (n >= k) {
	        for (int i = 1; i <= n / 5; i++) {
	            if (k <= 5 * i) {
	                count++;
	            }
	        }
	        
	        if (k % 5 != 0) {
	            cout << count << endl;
	        } else {
	            cout << count - 1 << endl;
	        }
	    }
	}
	
	return 0;
}
