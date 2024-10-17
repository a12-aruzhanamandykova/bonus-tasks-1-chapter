#include <iostream>
using namespace std;

int main() {
    int knightCol, knightRow, targetCol, targetRow;

    cin >> knightCol;
    cin >> knightRow;

    cin >> targetCol;
    cin >> targetRow;
    int colDiff = abs(knightCol - targetCol);
    int rowDiff = abs(knightRow - targetRow);
    bool canCapture = (colDiff == 2 && rowDiff == 1) || (colDiff == 1 && rowDiff == 2);

    if (canCapture) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
