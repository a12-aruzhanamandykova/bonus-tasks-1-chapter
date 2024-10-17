#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    for (int y = 0; y * 5 <= k; ++y) {
        int remaining = k - (y * 5);
        if (remaining % 3 == 0) {
            cout << "YES" << endl;
            return 0; 
        }
    }

    cout << "NO" << endl;
    return 0;
}
