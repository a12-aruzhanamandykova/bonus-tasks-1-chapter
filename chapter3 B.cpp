#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    bool found = false;  
    for (int i = a; i <= b; i++) {
        if (i % d == c) {  
            cout << i << " ";
            found = true;  
        }
    }

    if (!found) {
        cout << "";  
    }

    return 0;
}
