#include <iostream>
using namespace std;

int getBits(long long x) {
    int b = 0;
    while (x > 0) {
            if (x % 2 == 1) {
                b++;
            }
            x = x / 2;
        }
    return b;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i < t; i++) {
        long long x;
        cin >> x;
        int mBits = 0;
        while (x > 0) {
            mBits = max(mBits, getBits(x));
            x = x / 10;
        }
        cout << mBits << endl;
    }
    return 0;
}