#include <iostream>
#include <string>
using namespace std;

string toRoman(int num) {
    string result = "";

    pair<int, string> roman[] = {
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    for (int i = 0; i < 9; ++i) {
        while (num >= roman[i].first) {
            result += roman[i].second;
            num -= roman[i].first;
        }
    }

    return result;
}

int main() {
    int X;
    cin >> X;
    
    cout << toRoman(X) << endl;
    
    return 0;
}
