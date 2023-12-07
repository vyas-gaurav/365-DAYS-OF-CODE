#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin
}
}

    if (N % 2 != 0 && isPrime(N)) {
        // If N is an odd prime number, the player cannot make a move, so the other player wins.
        return "Alice";
    } else if (N % 2 == 0) {
        // If N is even, Alice can always subtract 2 (an odd prime) and make Bob lose.
        return "Bob";
    } 
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string winner = findWinner(N);
        cout << winner << endl;
    }

    return 0;
}
