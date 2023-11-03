#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,A,B,C;
	    cin>>a>>b>>c;
	    int temp=max(a,(b,c));
	    A=temp-a;
	    B=temp-b;
	    C=temp-c;
	    if(A<B && A<C)
	    {
	        if(B<C)
	        cout<<b<<endl;
	        else
	        cout<<c<<endl;
	    }
	    if(B<A && B<C)
	    {
	        if(A<C)
	        cout<<a<<endl;
	        else
	        cout<<c<<endl;
	    }
	    if(C<A && C<B)
	    {
	        if(A<B)
	        cout<<a<<endl;
	        else
	        cout<<b<<endl;
	    }
	    
	}
	return 0;
}
