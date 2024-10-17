#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int ones = n % 10;
    
    int sum = hundreds + tens + ones;
    
    cout << sum << endl;

    return 0;
}
