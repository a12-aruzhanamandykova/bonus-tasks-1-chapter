#include <iostream>
using namespace std;

int main() {
    int queenRow, queenCol, pieceRow, pieceCol;

    cin >> queenRow;
    cin >> queenCol;
    cin >> pieceRow;
    cin >> pieceCol;
    bool canCapture = (queenRow == pieceRow) ||           
                      (queenCol == pieceCol) ||             
                      (abs(queenRow - pieceRow) == abs(queenCol - pieceCol)); 

    
    if (canCapture) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
