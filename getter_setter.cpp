#include <iostream>
#include <string>
using namespace std;

class A{
public:
    void setName(string x){
        name=x;
    }
    string getName(){
    return name;}
private:
    string name;
};
int main(){
    A obj;
    obj.setName("Gaurav");
    cout<<obj.getName();
return 0;
}


