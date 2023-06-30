// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    // declare N as a string instead of an integer
	    string N;
	    cin >> N;
	    // array to hold all integers of the number
	    int final_ans[N.length()];
	    
	    
	    for(int i = 0; i < N.length(); i++)
	    {
	        // Convert the elements in the string N to integer(by subtracting '0' from each character) and insert it to the array
	        final_ans[i] = N[i]-'0';
	    }
	   
	    for(int i = 0; i < N.length(); i++)
	    {
	        cout << final_ans[i] << " ";
	    }
	    
	    cout << endl;
	}
}