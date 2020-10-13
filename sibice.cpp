#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    double r = sqrt(pow(x, 2) + pow(y, 2));

    for (int i=0; i < n; i++) {
        double k;
        cin >> k;
        if (k <= r) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
    return 0;
}