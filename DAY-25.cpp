#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int d, x, y, z;
	    cin >> d >> x >> y >> z;
	    int pehla = x * 7;
	    int dusra = y * d + (7 - d) * z;
	    cout << max(pehla, dusra) << endl;
	    
	}
	return 0;
}
