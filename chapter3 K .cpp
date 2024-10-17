#include <iostream>
using namespace std;

int main() {
    int N, number, sum = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> number;  
        sum += number;  
    }
    
    cout << sum;
    
    return 0;
}
