#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y, z;
    while (cin >> x >> y >> z) {
        if (x + y + z == 0) {
            return 0;
        }
        int a = min(x, min(y, z));
        int c = max(x, max(y, z));
        int b = 0;
        if (x != a && x != c) {
            b = x;
        }
        else if (y != a && y != c) {
            b = y;
        }
        else {
            b = z;
        }
        if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
            cout << "right" << endl;
        }
        else {
            cout << "wrong" << endl;
        }
    }
    return 0;
}