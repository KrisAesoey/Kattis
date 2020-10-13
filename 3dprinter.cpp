#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int s, d;
    cin >> s;

    d=0;
    while (true) {
        if (s <= pow(2, d)) {
            break;
        }
        d++;
    }
    cout << d + 1 << endl;
    return 0;
}