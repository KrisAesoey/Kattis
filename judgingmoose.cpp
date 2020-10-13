#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    if (l + r == 0) {
        cout << "Not a moose" << endl;
    }

    else if (l == r) {
        cout << "Even " << l + r << endl;
    }

    else {
        int high = (l > r) ? l : r;
        cout << "Odd " << high * 2 << endl;
    }

    return 0;
}