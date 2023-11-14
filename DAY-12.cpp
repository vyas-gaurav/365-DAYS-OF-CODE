#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--)
	{
	    int n;
	    std::cin >> n;
	    int A[n];
	    for (int i = 0; i < n; i++) {
	        /* code */
	        std::cin >> A[i];
	    
	        if(A[0]<A[i])
	        {
	            A[0]=A[i];
	        }
	    }
	    std::cout << A[0] << std::endl;
	}
	return 0;
}
