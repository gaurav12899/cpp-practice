#include<iostream>
using namespace std;
void invertedPattern(int n);
void zero_one(int n);
void rhombus_pattern(int n);
void number_pattern(int n);
void palindromic_pattern(int n);
void star_pattern(int n);
void zig_zag_pattern(int n);
int main(){

    int n;
    cin>>n;
    //invertedPattern(n);
    //zero_one(n);
   // rhombus_pattern(n);
    //number_pattern(n);
    //palindromic_pattern(n);
    //star_pattern(n);
   //attern(n);
    return 0;
}

void invertedPattern( int n){
for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void zero_one(int n){
    for (int i=0;i<n;i++){
        for(int j=1;j<i+2;j++){
            if((i+j)%2==0){

                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}


void rhombus_pattern(int n){
    for (int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
        cout<<" ";
       }
       for(int k=0;k<n;k++){
        cout<<"*"<<" ";
       }

    cout<<endl;
    }
}


void number_pattern(int n){
    for (int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
        cout<<" ";
       }
       for(int j=1;j<i+1;j++){
        cout<<j<<" ";
       }

    cout<<endl;
    }
}


void palindromic_pattern(int n)
{
     for (int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
        cout<<"  ";
       }
       for(int j=i+1;j>=2;j--){
        cout<<j<<" ";
       }
       cout<<1<<" ";
       for(int j=2;j<i+2;j++){
        cout<<j<<" ";
       }


    cout<<endl;
    }

}


void star_pattern(int n){

     for (int i=1;i<=n;i++){
       for(int j=n-i;j>=1;j--){
        cout<<"  ";
       }
       for(int j=0;j<2*i-1;j++){
        cout<<"* ";
       }

    cout<<endl;
    }
     for (int i=n;i>0;i--){
          for(int j=0;j<n-i;j++){
        cout<<"  ";
       }

            for(int j=0;j<2*(i)-1;j++){
        cout<<"* ";
       }


    cout<<endl;
    }

}


void zig_zag_pattern(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=3*n;j++){
        if((i+j)%4==0 || (j%4==0)&&i==2){
            cout<<"* ";
              }

    else{
        cout<<"  ";
    }
}
cout<<endl;
}
}
