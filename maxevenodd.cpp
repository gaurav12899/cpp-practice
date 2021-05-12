#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[],int n){
    int res=0;
    int count=1;
    int flag;


if(arr[0]%2==0)flag=1;
else flag=-1;
int sum=flag;
    for(int i=1;i<n;i++){
        if(arr[i]%2==0)flag=1;
        else flag=-1;
        sum=sum+flag;
        if(sum!=0){
            count=1;
        }
        else{
         count++;
         res=max(count,res);
        }
            sum=flag;
        
        
    }
return res ;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxEvenOdd(arr,n);

return 0;
}