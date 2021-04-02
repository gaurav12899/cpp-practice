#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;

    int maxi=INT_MIN;
    int winner;
    for(int i=0;i<n;i++){
        
            int lead=0;
        int si,ti;
        cin>>si>>ti;
        if(si>ti){
            lead=si-ti ;
            if(lead>maxi){
                            winner=1;
                            maxi=lead;

            }
        }
    else{
           lead=-si+ti ;
            if(lead>maxi){
                            winner=2;
                            maxi=lead;

            }
        }
    
    }
    cout<<winner<<" "<<maxi;
	return 0;
}
