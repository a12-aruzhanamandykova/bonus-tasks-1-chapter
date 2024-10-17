#include <iostream>
using namespace std;

int main() {
    int number;
    
    cin >> number;

    int d1 = (number / 1000) % 10; 
    int d2 = (number / 100) % 10;  
    int d3 = (number / 10) % 10;  
    int d4 = number % 10;         
    int symmetric = (d1 == d4) * (d2 == d3); 
    cout << (symmetric * 1 + (1 - symmetric) * 37) << endl;

    return 0;
}
