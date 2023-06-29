//Solution as follows

#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t, N;
    cin >> t;
    while(t--)
    {
        cin >> N;
        int A[N], unique[N], freq[N];
        int k = 0;
        int j = 0;
        for(int j = 0; j < N; j++)
        {
            cin >> A[j];
            int flag = 1;
            for(int l = 0; l < k; l++)
            {
                if(unique[l] == A[j])
                {
                    flag = 0;
                    break;
                }
            }
            // add each unique element to array a new array 'unique'
            if(flag)
            {
                unique[k] = A[j];
                k++;
            }
        }
        // sort the elements of array 'unique'
        sort(unique, unique + k);
        for(int j = 0; j < k; j++){
            cout << unique[j] << " ";
        }
        cout << endl;
        for(int j = 0; j < k; j++)
        {
            int cnt = 0;
            for(int l = 0; l < N; l++)
            {
                // count the frequency of each element in array 'unique' in the original array 'A'
                if(unique[j] == A[l])
                {
                    cnt++;
                }
            }
            // add the frequency of each element to the array 'freq'
            freq[j]=cnt;
        }
        for(int i=0; i<k; i++)
        {
            cout << freq[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
