#include <iostream>
using namespace std;

int main() {
    int bishopRow, bishopCol, pieceRow, pieceCol;

    cin >> bishopRow;
    cin >> bishopCol;

    cin >> pieceRow;
    cin >> pieceCol;
    bool canCapture = abs(bishopRow - pieceRow) == abs(bishopCol - pieceCol);

   
    if (canCapture) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
