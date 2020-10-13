#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 4) {
        cout << 1 << endl;
        return 0;
    }
    else {
        cout << n - 2 << endl;
        return 0;
    }
}