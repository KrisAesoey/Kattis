#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x, y;
    double t = 0.000;
    for (int i=0; i < n; i++) {
        cin >> x >> y;
        t += x * y;
    }
    cout.setf(ios::fixed, ios:: floatfield);
    cout.precision(3);
    cout << t << endl;
    return 0;
}