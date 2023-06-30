// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    string A,B;
	    cin >> A >> B;
	    int n=A.length();
	    int i =0;
	    //Flag is a very imporant tool in programming problems - you will come across various examples in later problems as well
	    int flag = 0;
	    
	    while(i < n)
	    {
	        // Checking A from left to right and B from right to left
	        if ( A[i] == B[n - i - 1] )
	        {
	            i++;
	        }
	        
	        else
	        {
	            // If specific character in A and B do not match, then they cannot be reverse
	            flag = 1;
	            break;
	        }
	    }
	    
	    if (flag == 1)
	    {
	        cout << "No" << endl;
	    }
	    
	    else
	    {
	        cout << "Yes" << endl;
	    }
	      
	
	}

}