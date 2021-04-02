// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[]={10,12,4,6,8};
//     int out[n];
//     stack<int> st;
//     for(int i =n-1;i>=0;i--){
//         while()
//     }

// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    for(int j=0;j<k;j++){
        int m,n;
        
        cin>>m>>n;
        int football[m];
        int cricket[n];
        for(int i=0;i<m;i++)
            cin>>football[i];
        
         for(int i=0;i<n;i++)
            cin>>cricket[i];
        
        int c=0;
        int ptr1=0;
        int ptr2=0;
        if(football[0]>cricket[0]){
        ptr2++;
        c++;
        }else{
            ptr1++;
        }
        while(ptr1<m && ptr2<n){
          
            if(football[ptr1]<cricket[ptr2] && c!=0){
                ptr1++;
                c++;
            }else{
                c++;
                ptr2++;
            }
        }
        
    cout<<c<<endl;
    }
	return 0;
}
