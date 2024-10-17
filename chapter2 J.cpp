#include <iostream>
using namespace std;

int main() {
    int startCol, startRow, endCol, endRow;

    cin >> startCol;
    cin >> startRow;
    cin >> endCol;
    cin >> endRow;

    bool canMove = (abs(startCol - endCol) <= 1) && (abs(startRow - endRow) <= 1);

    if (canMove) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
