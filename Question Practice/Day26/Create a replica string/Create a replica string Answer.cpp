// Solution as follows

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string S,A,B;
   cin>>S;
  // Use for loop to loop through every character of S
   for(int i=0; i<S.length();i++)
      {
        // Adds the character to the end of A
        A+=S[i];
      }
  // Use for loop to loop through every character of S
   for(int i=S.length()-1; i>=0;i--)
       {
         // Adds the character to the start of B
         B+=S[i];
       }
   for(int i=0; i<S.length();i++)
       {
         cout<<A[i];
       }
   cout<<endl;
   for(int i=0; i<S.length();i++)
       {
         cout<<B[i];
       }
   cout<<endl;
  }
 return 0;
}
   