#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[],int n){
    int count=1;
    int i=0;
 for( i=0;i<n-1;i++){
     if(arr[i]==arr[i+1]){count++;}
     else{
         cout<<arr[i]<<" "<<count<<endl;
         count=1;
     }
 }
 cout<<arr[i]<<" "<<count;

}
int main(){
    int arr[]={20};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequencies(arr,n);
    
    
}