#include <iostream>
using namespace std;

int main() {
    int expected_answer, student_answer;

    cin >> expected_answer >> student_answer;


    bool is_correct = (expected_answer == 1 && student_answer == 1) || (expected_answer != 1 && student_answer != 1);

 
    cout << (is_correct ? "YES" : "NO") << endl;

    return 0;
}
