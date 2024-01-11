#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check_hat_trick(std::vector<std::string>& over) {
    for (int i = 0; i < 4; ++i) { 
        if (over[i] == "W" && over[i + 1] == "W" && over[i + 2] == "W") {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        vector<string> over(6);

        
        for (int i = 0; i < 6; ++i) {
            cin >> over[i];
        }

        
        if (check_hat_trick(over)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
