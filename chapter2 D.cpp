#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int sign_value = (x > 0) - (x < 0);  
    cout << sign_value << endl;

    return 0;
}
