#include<iostream>
using namespace std;
int main(){
int n;
int binaryNum[32];

cout<<"Enter your number"<<endl;
cin>>n;
int res=n;
int i=0;
while(res>0){
    binaryNum[i]=res%2;

    res=res/2;
    i++;

}
for (int j=i-1;j>=0;j--){
    cout<<binaryNum[j];
}
    return 0;
}
