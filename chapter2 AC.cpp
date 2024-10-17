#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool has_even = (A % 2 == 0) || (B % 2 == 0) || (C % 2 == 0);
    bool has_odd = (A % 2 != 0) || (B % 2 != 0) || (C % 2 != 0);

    if (has_even && has_odd) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
