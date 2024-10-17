#include <iostream>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
	
	int result = (n % m == 0) + (m % n == 0);

    
    cout << (result > 0) + 37 * (result == 0) << endl;

    return 0;
}
