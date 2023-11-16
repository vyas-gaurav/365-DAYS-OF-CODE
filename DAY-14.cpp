#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        //cost of red  k*x
        //cost of blue n-k*y 
        //total cost = k*x + n-k*y 
        
        cout<<(k*x)+((n-k)*(min(x,y)))<<endl;
    }
	return 0;
}
