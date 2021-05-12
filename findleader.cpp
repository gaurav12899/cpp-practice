#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i] ){
                flag=1;
           break;
            }

        }
        if(flag==0)cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];

}
void efficient(int arr[],int n){
    int c_leader=arr[n-1];
    cout<<(c_leader)<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>c_leader){
            c_leader=arr[i];
            cout<<(arr[i])<<" ";
        }
    }


}
int main(){
    int arr[]={7,10,4,10,6,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    efficient(arr,n);
    
    
}