#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    long long n; 
    cin >> n;

    int hours = (n / 3600) % 24;         
    int minutes = (n % 3600) / 60;       
    int seconds = n % 60;                 
    
    cout << hours << ":" 
         << setw(2) << setfill('0') << minutes << ":" 
         << setw(2) << setfill('0') << seconds << endl;

    return 0;
}

