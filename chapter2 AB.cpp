#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // ?????????? ?????????? ?????????
    if (N % 100 >= 11 && N % 100 <= 14) {
        cout << N << " bochek" << endl;
    } else if (N % 10 == 1) {
        cout << N << " bochka" << endl;
    } else if (N % 10 >= 2 && N % 10 <= 4) {
        cout << N << " bochki" << endl;
    } else {
        cout << N << " bochek" << endl;
    }

    return 0;
}
