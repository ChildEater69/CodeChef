// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    for(int i=0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    // Initialise the rightmost index to 0
        int right = 0;
        // Initilise the largest value to -100. The smallest element in A is -100
        int large = -100;
        for(int i=0; i < N; i++)
	    {
	        // Here - we need to check if A[i] '=' large so that we can update the variable 'right'
	        if (A[i] >= large)
	        {
	            large = A[i];
                right = i;
	        }
	    }
	    cout << large << " "<< right << endl;
        
	}
}