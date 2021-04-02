
#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;		
	for(int j=0;j<num;j++){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		for(int i=n-k;i<n;i++)
			cout<<arr[i]<<" ";
		
		for(int i=0;i<n-k;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}

