#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int num;
	    cin>>num;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<num;i++){
	        if(s[i]=='0'){
	            break;
	        }
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
