#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sumArr[n+1];
    sumArr[0]=0;
    
    for(int i=1;i<n;i++){
        sumArr[i]=arr[i-1]+sumArr[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<n;i++){
        int sum=0;
    for(int j=0;j<i;j++){
            sum=sumArr[i]-sumArr[j];
            maxSum=max(sum,maxSum);
    }
    
    }
    cout<<maxSum;
    return 0;
}