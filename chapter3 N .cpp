#include <iostream>
using namespace std;

int main() {
    int N, number;
    int zero_count = 0, positive_count = 0, negative_count = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> number;  
        if (number == 0) {
            zero_count++;  /
        } else if (number > 0) {
            positive_count++;  
        } else {
            negative_count++; 
        }
    }
    
    cout << zero_count << " " << positive_count << " " << negative_count;
    
    return 0;
}


