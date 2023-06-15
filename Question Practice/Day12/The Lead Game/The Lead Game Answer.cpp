#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,player1=0,player2=0,winner=0,lead=0;
	int a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    player1+=a;
	    player2+=b;
	    int diff=abs(player1-player2);
	    if(diff>lead){
	        lead=diff;
	        if(player1>player2){
	            winner=1;
	        }else{
	            winner=2;
	        }
	        
	    }
	}
	cout<<winner<<" "<<lead<<endl;
	return 0;
}
