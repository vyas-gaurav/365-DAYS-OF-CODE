#include <bits/stdc++.h>
#include <sstream>
using namespace std;


    
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                count++;
            }
        }
        
        if(count == n){
            cout<<0<<endl;
        }else{
           cout<<count<<endl; 
        }
        
        
        
	}
	return 0;
}
