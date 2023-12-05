#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n,x;
	    std::cin >> n>>x;
	    int a[n],h=0;
	    for (int i = 1; i <= n; i++) {
	        /* code */
	        std::cin >> a[i];
	    
	        if(a[i]<x)  
	             h=i;   
	    }
	    
	   std::cout << h << std::endl;
	}
	return 0;
}
