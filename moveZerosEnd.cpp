#include<bits/stdc++.h>
using namespace std;


void moveZeroes(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n-1;j++){
            arr[j]=arr[j+1];
            }
            arr[n-1]=0;
        }
    }

}

void efficient(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }

    }
}

int main(){
    int arr[]={10,20,0,1,0,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    efficient(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}