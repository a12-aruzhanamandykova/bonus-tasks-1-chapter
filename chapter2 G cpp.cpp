#include <iostream>
using namespace std;

int main() {
    int rookRow, rookCol, pieceRow, pieceCol;

    cin >> rookRow;
    cin >> rookCol;

    cin >> pieceRow;
    cin >> pieceCol;

    bool canCapture = (rookRow == pieceRow) || (rookCol == pieceCol);

    if (canCapture) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

