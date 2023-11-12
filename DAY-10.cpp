#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,p;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> p;
	   if(p/100+p%100 <=10) std::cout << p/100+p%100 << std::endl; 
	   else std::cout << -1 << std::endl;
	}
	return 0;
}
