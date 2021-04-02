#include <bits/stdc++.h>
using namespace std;

int main() {
    float am;
    int wd;
    cin>>am>>wd;
    if(wd%5==0 && am>(0.5+wd)){
        am=am-(0.5+wd);
    }
    float f=56.222;
    //   cout <<fixed<< setprecision(2) << f << '\n';

        cout<<fixed<<setprecision(2)<<am<<endl;
	return 0;
}
