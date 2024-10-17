#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    bool canBreak = (k % m == 0 && k / m < n) || (k % n == 0 && k / n < m);

    if (canBreak) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
