#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
cin.ignore();
char arr[n+1];

cin.getline(arr,n);
cin.ignore();

int i=0, mx=0,c=0;
int maxst=0,st=0;   
    while(1){

        if(arr[i]==' '||arr[i]=='\0'){
            if(c>mx){
                mx=c;
                maxst=st;
            }
            c=0;
            st=i+1;
            
        }else{
            c++;
            
        }

        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<mx;
    for(i=0;i<mx;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}