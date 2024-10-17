#include <iostream>
using namespace std;

int main() {
    int N, number, zero_count = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> number; 
        if (number == 0) {  
            zero_count++; 
        }
    }
    
    cout << zero_count;
    
    return 0;
}

