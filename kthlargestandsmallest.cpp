
#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;
 cin>>n;
 for(int i=0;i<n;i++){
     int size,pos;
     cin>>size>>pos;
     int arr[size];
     for(int i=0;i<size;i++){
         cin>>arr[i];
     }
	    sort(arr, arr + size);
     
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
 }
    
 
 
    return 0;
}