#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int days = (m + n - 1) / n; 
    cout << days << endl;

    return 0;
}
