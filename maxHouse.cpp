#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int hn, am;
        cin>>hn>>am;
        int arr[hn];
        for(int j=0;j<hn;j++){
            cin>>arr[j];

        }
       
        sort(arr,arr+hn);
          
        int c=0;
        int hv=arr[c];
        while(am>=hv){
            am=am-hv;
            c+=1;
            hv=arr[c];
            
        }
        cout<<"Case #"<<i+1<<": "<<c<<endl;
    }
    return 0;
}