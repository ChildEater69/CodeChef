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
	    // There are 8 holidays in the given month
	    int Weekend=8;
	    for(int i=0; i < N; i++)
	    {
	        cin >> A[i];
	        // If the date (A[i]) divided by 7 leaves reminder 6 or 0 then on the date it will be Saturday and Sunday respectively
	        if (A[i]%7 != 6 && A[i]%7 != 0)
	        {
	            Weekend++;
	        }
	    }
	    //number of elements in the final holiday list
	    cout<<Weekend<<endl;
	}
}