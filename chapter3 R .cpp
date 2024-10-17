#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    
    cin >> a >> b >> c >> d >> e;
    
    int count = 0;  
    for (int x = 0; x <= 1000; x++) {
        if (x != e) {
            int equation_result = a * x * x * x + b * x * x + c * x + d;
            
            if (equation_result == 0) {
                count++;
            }
        }
    }
    
    cout << count;
    
    return 0;
}

