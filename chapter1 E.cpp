#include <iostream>
using namespace std;

int main() {
    int v, t;
    const int MKAD_LENGTH = 109; 
    cin >> v >> t;
    int position = ((v * t) % MKAD_LENGTH + MKAD_LENGTH) % MKAD_LENGTH;

    cout << position << endl;

    return 0;
}



