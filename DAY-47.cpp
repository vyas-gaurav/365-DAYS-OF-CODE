#include <iostream>
using namespace std;

int main() {
	int x, y, z, w;
	cin>>x>>y>>z>>w;
	 if(x*w == z*y){        //x:y::z:w
        cout<<"Possible";
	}
	else if(y*w == x*z){    //y:z::x:w
		cout<<"Possible";
	}
    else if(z*w == y*x){    //z:x::y:w
    	    cout<<"Possible";
	}
	else{
		cout<<"Impossible";
	}
	return 0;
}
