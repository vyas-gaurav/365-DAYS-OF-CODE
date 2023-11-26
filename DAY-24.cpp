#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<sqrt(m*m-n*n)<<" "<<sqrt(m*m+n*n)<<endl;
	  
	}
	return 0;
}
