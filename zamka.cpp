#include <iostream>
using namespace std;

int main() {
    int l, d, x;
    cin >> l >> d >> x;

    int s, b = 0;

    for (int i=l; i <= d; i++) {
        int t = 0;
        int j = i;

        while (j != 0) {
            t += j % 10;
            j /= 10;
        }
        if (t == x && s == 0) {
            cout << i << endl;
            s = i;
        }
        if (t == x) {
            b = i;
        }
    }
    cout << b << endl;
    return 0;
}