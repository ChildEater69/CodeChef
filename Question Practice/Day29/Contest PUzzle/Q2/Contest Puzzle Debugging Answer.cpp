#include <bits/stdc++.h>
using namespace std;


int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // your code starts from here
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i += 2) {
            if (s[i] == '0' && s[i + 1] == '0')
                cout << "A";
            else if (s[i] == '0' && s[i + 1] == '1')
                cout << "T";
            else if (s[i] == '1' && s[i + 1] == '0')
                cout << "C";
            else
                cout << "G";
        }
        cout << endl;

    }
    return 0;
}



