#include <iostream>
using namespace std;

int main() {
    int lesson_number; 
	    cin >> lesson_number;

        int total_minutes = lesson_number * 45 + ((lesson_number - 1) / 2) * 20 + ((lesson_number - 1) % 2) * 5;

    int hours = 9 + total_minutes / 60; 
    int minutes = total_minutes % 60;

    cout << hours << " " << minutes << endl;

    return 0;
}

