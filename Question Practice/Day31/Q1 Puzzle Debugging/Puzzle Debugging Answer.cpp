#include <iostream>
using namespace std;

int main() {
    int t, n, i, j;
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        int a[n];
        
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int minCount = n;
        for (i = 0; i < n; i++) {
            int count = 0;
            
            for (j = 0; j < n; j++) {
                if (a[j] != a[i])
                    count++;
            }
            
            if (count < minCount)
                minCount = count;
        }
        
        cout << minCount << endl;
    }
    
    return 0;
}
