#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int d = 1;
    bool dFound = false;
    while (!dFound) {
        if (k > d) {
            d = d * 2;
        }
        else {
            dFound = true;
        }
    }
    int p = 0;
    int db = d;
    int b = 0;
    while (p != k) {
        if (ceil(log2(k)) == floor(log2(k))) {
            p = k;
            break;
        }
        db = db / 2;
        p = p + db;
        if (p > k) {
            p -= db;
        }
        b += 1;
    }
    cout << d << " " << b;
    return 0;
}