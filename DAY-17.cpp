#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int s[n];
	    int d[n];
	    int equal = 0;
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>d[i];
	    }
	    for(int i=0;i<n;i++){
	    if(s[i] == d[i]){
	     equal++;   
	    }
	    }
	    cout<<equal<<endl;
	}
	return 0;
}
