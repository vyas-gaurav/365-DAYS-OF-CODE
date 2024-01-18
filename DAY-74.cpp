#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        // if it is both are odd then theres no way to make a palindrome cus 1 bit will be left and it will not be a palindrome
        // if a is 1 or b is 1, we can only create 1 palindrome and not 2
        if((a%2 != 0 && b%2 != 0) || a == 1 || b == 1){
            cout<<"No\n";
        }else{
            // if a is even then we can put a/2 0s and b1s and again a/2 0s and when b is even then we do b/2 0s and a1s and again b/2 0s
            // if both are even then we will do the same thing
            cout<<"Yes\n";
        }
    }
    return 0;
}
