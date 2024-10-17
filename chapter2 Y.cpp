#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int n60 = n / 60;            
    int remainder = n % 60;        
    int n10 = remainder / 10;    
    int n1 = remainder % 10;      
    if (n1 * 15 > 125) {
        n1 = 0;
        n10++;
    }
    if (n10 * 125 + n1 * 15 > 440) {
        n10 = 0;
        n1 = 0;
        n60++;
    }

    cout << n1 << " " << n10 << " " << n60 << endl;

    return 0;
}
