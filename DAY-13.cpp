#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int target,over,score;
	std::cin >> target>>over>>score;  
	if((20-over)*36+score>target)   std::cout << "Yes" << std::endl;
	else    std::cout << "No" << std::endl;
	return 0;
}
