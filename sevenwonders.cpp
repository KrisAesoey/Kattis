#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int p [3] = {0, 0, 0};
    for (char c : s) {
        if (c == 'T') {
            p[0] += 1;
        }
        if (c == 'C') {
            p[1] += 1;
        }
        if (c == 'G') {
            p[2] += 1;
        }
    }
    int b = *min_element(p, p + 3) * 7;
    cout << pow(p[0], 2) + pow(p[1], 2) + pow(p[2], 2) + b << endl;
    return 0;
}