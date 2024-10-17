#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int costInKopecks = a * 100 + b; 
    int paymentInKopecks = c * 100 + d; 
    int changeInKopecks = paymentInKopecks - costInKopecks;

    int e = changeInKopecks / 100; 
    int f = changeInKopecks % 100;  
    cout << e << " " << f << endl;

    return 0;
}

