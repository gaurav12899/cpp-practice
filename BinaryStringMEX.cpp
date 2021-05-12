#include<bits/stdc++.h>
using namespace std;

bool isSubSequence(char str1[], char str2[],
                                 int m, int n)
{
     
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last characters of two
    // strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 
    // If last characters are
    // not matching
    return isSubSequence(str1, str2, m, n - 1);
}
 






void MEX(string x)
{

    int y=stoi(x, 0, 2);
    for(int i=0;i<y;i++){
        string binary;
        if(i!=0){

 binary = std::bitset<8>(i).to_string(); 

binary.erase(0, binary.find_first_not_of('0'));

        }else{ binary="0";}
int m = x.length();
 
    char str1[m + 1];
    int n=binary.length();
    char str2[n + 1];

    strcpy(str1, x.c_str());
    strcpy(str2, binary.c_str());


   if(!isSubSequence(str2,str1,n+1,m+1)) {cout<<binary<<endl;break;}else{continue;}
    }
   
   
}
  
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string binarynum;
       cin>>binarynum; 
        MEX(binarynum);
    }
    return 0;
}