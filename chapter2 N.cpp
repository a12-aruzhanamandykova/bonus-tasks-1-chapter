#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "INF" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        int x = -b / a;
        if (-b % a != 0) {
         
            cout << "NO" << endl;
        } else {
            
            cout << x << endl;
        }
    }

    return 0;
}
