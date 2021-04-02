#include "bits/stdc++.h"
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    const int N=100000;
    cout<<N;
    int b[N];

    int mn_ind=INT_MAX;
    cout<<"D";

    for(int i=0;i<N;i++){
        b[i]=-1;

    }


    
    for(int i=0;i<n;i++){
        if(b[a[i]]==-1)
            b[a[i]]=i;
        else{
            mn_ind=min(b[a[i]],mn_ind);
        }
    }


    if(mn_ind==INT_MAX){
        cout<<"-1"<<endl;
        return 0;

    }

    else{

        cout<<mn_ind<<endl;
    }
        return 0;

}