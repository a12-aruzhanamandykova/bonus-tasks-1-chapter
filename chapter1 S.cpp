#include <iostream>
using namespace std;

int main() {
    int h, a, b;
    cin >> h >> a >> b;
    int net_progress = a - b;
    int days = (h - a + net_progress - 1) / net_progress + 1;

    cout << days << endl;

    return 0;
}

