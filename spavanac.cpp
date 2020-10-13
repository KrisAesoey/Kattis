#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if (m > 45) {
        m = m - 45;
    }
    else {
        (h == 0) ? (h = 23) : (h--);
        m = 60 - abs(m - 45);
    }
    cout << h << " " << m << endl;
    return 0;
}