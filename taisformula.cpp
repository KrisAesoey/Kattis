#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double x, y, a, b;
    cin >> y >> b;

    double total = 0;

    for (int i=1; i < n; i++) {
        x = y;
        a = b;
        cin >> y >> b;

        total += (a + b) / 2 * (y - x);
    }
    cout << setprecision(7) << total / 1000 << endl;
    return 0;
}