#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   int maxSum=INT_MIN;
   int currentSum=0;
   for(int i=0;i<n;i++){
       currentSum=arr[i]+currentSum;
       if(currentSum<=0){
           currentSum=0;
       }
       maxSum=max(currentSum,maxSum);
   }

    cout<<maxSum;
    return 0;
}