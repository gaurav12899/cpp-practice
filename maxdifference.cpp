#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={30,10,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min_val=arr[0];
    int res=arr[1]-min_val;
    for(int i=1;i<n;i++){
            res=max(res,arr[i]-min_val);
            min_val=min(arr[i],min_val);

    }
    cout<<res;
    return 0;
}