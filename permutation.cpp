#include<bits/stdc++.h>


using namespace std;

     string swap(string str,int left,int right){
        char t;
        char chrArray[str.length()];
        strcpy(chrArray,str.c_str());
        t=chrArray[left];
        chrArray[left]=chrArray[right];
        chrArray[right]=t;
        int size=sizeof(chrArray)/sizeof(char);
        return string(chrArray,size);
    }
    void findPermutation(string str, int left,int right)
    {
        if(left==right){
            cout<<str<<endl;

        }else{
            for(int i=left;i<=right;i++){   
               str= swap(str,left,i);
               findPermutation(str,left+1,right);
                str=swap(str,left,i);
            }
        }
    }
   
int main(){
    string str;
    cin>>str;
findPermutation(str,0,str.length()-1);
}