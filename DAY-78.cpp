#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

void solve() {
	string s;
	cin>>s;
	int arr[s.length()];
	char s1[s.length()];
	for(int i=0;s[i]!='\0';i++)
	{
	    arr[i]=s[i];
	}
	sort(arr,arr+s.length());
	ll temp=0;
	for(int i=0;i<s.length();i++)
	{
	    temp+=(i+1)*(arr[i]-96);
	}
	cout<<temp<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t; cin >> t;
	while(t--)
		solve();
	return 0;
}
