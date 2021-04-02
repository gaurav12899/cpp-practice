#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int sum=0;
        int v;
        cin>>v;
        sum+=v%10;
        while(v>10){
            v/=10;
        }
        sum+=v;
    cout<<sum<<endl;
}

}