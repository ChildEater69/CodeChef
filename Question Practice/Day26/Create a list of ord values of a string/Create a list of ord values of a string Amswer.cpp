// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
    cin >> t;
	
	while(t--)
	{
	    string S;
	    cin >> S;
	    int A[S.length()];
	    
	    for(int i = 0; i < S.length(); i++)
	    {
            //Converts a character into its ASCII value
	        A[i] = int(S[i]);
	    }
	    for(int i = 0; i < S.length(); i++)
	    {
	        cout << A[i] << " ";
	    }
	    cout << endl;    
	
	}

}