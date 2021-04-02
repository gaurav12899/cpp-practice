#include<bits/stdc++.h>
using namespace std;
    bool checkString(){
    string str="{[{()}]}";

    stack<int> s;

    for(int i=0;i<str.length();i++){
        char ch=str.at(i);
        if(ch=='{'||ch=='['||ch=='(') s.push(ch);
        else{
        if(s.empty())return false;
        char top=s.top();
        if(ch=='}'&& top!='{')return false;
        else if(ch==')'&&top!='(')return false;
        else if(ch==']'&&top!='[')return false;
        else  s.pop();

        }
        

    }

    return s.empty();
    }

int main(){

if(checkString())
    cout<<"true";
else cout<<"false";
return 0;
}