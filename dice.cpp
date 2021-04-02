#include <iostream>
using namespace std;

int main() {int t;
cin>>t;int n;
for(int i=0;i<t;i++){
    cin>>n;
    check(){
        
    if(n%4==0){
        n=n/4;
        if(n>0){
            check();
        }
    }else if(n%3==0 ){
         n=n/10;
        if(n>0){
            check();
        }
    }

else if(n%2==0 ){
     n=n/10;
        if(n>0){
            check();
        }

}else{
    
}

    }
	return 0;
}
