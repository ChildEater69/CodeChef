// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    string S,T,M;
	    cin >> S >> T;
    	for(int k = 0; k < 5; k++)
    	{
    	   // If the i element in S and T are the same, then the i element in M is G
	       if (S[k] == T[k])
	       {
	           M=M+'G';
	       } 
	       // If the i element in S and T are not the same, then the i element in M is B
	       else
	       {
	         M=M+'B';
	        }
	     }
	 cout << M << endl;
	}
	
}
