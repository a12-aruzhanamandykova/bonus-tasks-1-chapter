#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int total_kopecks = (a * 100 + b) * n; 
    int total_rubles = total_kopecks / 100;  
    int remaining_kopecks = total_kopecks % 100; 
    
    cout << total_rubles << " " << remaining_kopecks << endl;

    return 0;
}
