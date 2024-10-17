#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string word;
    if (n % 10 == 1 && n % 100 != 11) {
        word = "korova"; 
    } else if ((n % 10 >= 2 && n % 10 <= 4) && (n % 100 < 12 || n % 100 > 14)) {
        word = "korovy"; 
    } else {
        word = "korov"; 
    }

    cout << n << " " << word << endl;

    return 0;
}
