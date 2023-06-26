// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int A[10];
	    for(int i = 0; i < 10; i++)
	    {
	        cin >> A[i];
	    }
	    //Calculate and store Team-1 and Team-2 scores
        int team1 = A[0] + A[2] + A[4] + A[6] + A[8];
        int team2 = A[1] + A[3] + A[5] + A[7] + A[9];
        // Apply relevant conditions to check for victory
        if (team1 > team2)
        {
            cout << 1 << endl;
        }
        else if (team1 < team2)
        {
            cout << 2 << endl;
        }
        else 
        {
            cout << 0 << endl;
        }
	}
}