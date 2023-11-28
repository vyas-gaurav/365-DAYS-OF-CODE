#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=min(abs(a-b),abs(abs(a-b)-c));
	    cout<<x<<endl;
	}
	return 0;
}
