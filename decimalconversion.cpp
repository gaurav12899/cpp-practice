#include<bits/stdc++.h>
using namespace std;

void decimal_to_binary(int n){
int ans=0;
int x=1;
while (x<=n)
    x*=2;
x/=2;
while(x>0){
    int lastDigit= n/x;
    n-=lastDigit*x;
    x/=2;
    ans= ans*10+lastDigit;
}
cout<<ans;
}

void binary_to_decimal(int n){
    int x=1, ans=0;
while (n>0){
    int y= n%10;
    ans+= x*y;
    n/=10;
    x*=2;
}
cout<<ans;
}


void hexadecimal_to_binary(string n){
    int x=1;
    int ans=0;
    int s=n.size();
   for(int i=s-1;i>=0;i--){
       if(n[i]>='0'&& n[i]<='9'){
           ans+=x*(n[i]-'0');
       }
       else if(n[i]>='A' && n[i]<='F'){
           ans+=x*(n[i]-'A'+10);

       }
       x*=16;
   }
   cout<<ans;
}


void decimal_to_hexaDecimal(int n){
    string ans="";  
    int x=1;
    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int lastDigit= n/x;
        n-=lastDigit*x;
        if(lastDigit<=9){
            ans=ans+to_string(lastDigit);
        }
        else{
            char c= 'A'+lastDigit-10;
            ans.push_back(c);
        }
        x/=16;
    }
    cout<<ans;
}
void reverse(int n){
    int ans=0;
    while(n>0){
        int lastDigit=n%10;
        ans=ans*10+lastDigit;
        n/=10;
    }
cout<<ans;
}

void binary_addition(int a,int b){
    int ans=0;
    int prevCarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
              
                       ans=ans*10+prevCarry;
            prevCarry=0;
cout<<"a%2==0 && b%2==0::"<<ans<<endl;

            
           
        }
       
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
            if(prevCarry==1){

                       ans=ans*10+0;
            prevCarry=1;

            }
               else {
                   
                       ans=ans*10+1;
            prevCarry=0;

                
            }
cout<<"((a%2==0 && b%2==1)||(a%2==1 && b%2==0))::"<<ans<<endl;
            
        }else{
                     ans=ans*10+prevCarry;
            prevCarry=1;    
cout<<"a%2==1 && b%2==1::"<<ans<<endl;
        }
        a/=10;
        b/=10;
    }
   /* if(a>0){
        if(a%2==0){
            if(prevCarry==0){
                ans=ans*10+0;
            prevCarry=0;

            }
            if(prevCarry==1){
                ans=ans*10+1;
            prevCarry=0;
            }

        }
        if(a%2==1){
            if(prevCarry==0){
                ans=ans*10+1;
            prevCarry=0;

            }
            if(prevCarry==1){
                ans=ans*10+0;
            prevCarry=1;
            }

        }
        a/=10;

    }
    if(b>0){
        if(b%2==0){
            if(prevCarry==0){
                ans=ans*10+0;
            prevCarry=0;

            }
            if(prevCarry==1){
                ans=ans*10+1;
            prevCarry=0;
            }

        }
          if(b%2==1){
            if(prevCarry==0){
                ans=ans*10+1;
            prevCarry=0;

            }
            if(prevCarry==1){
                ans=ans*10+0;
            prevCarry=1;
            }

        }
        b/=10;
    }*/

     reverse(ans);
}

int main(){
    int a,b;
    cin>>a>>b;
    binary_addition(a,b);
    return 0;

}