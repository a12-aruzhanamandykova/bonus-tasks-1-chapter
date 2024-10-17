#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    
    if (n <= k) {
        cout << 2 * m << endl; 
    } else {
        
        int total_sides = 2 * n;
        
      
        int batches = (total_sides + k - 1) / k;
        
       
        cout << batches * m << endl;
    }

    return 0;
}

