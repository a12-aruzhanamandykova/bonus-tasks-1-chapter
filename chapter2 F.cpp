#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    int max_value = (a > b) * a + (b >= a) * b; 
    max_value = (max_value > c) * max_value + (c >= max_value) * c; 
    cout << max_value << endl;

    return 0;
}
