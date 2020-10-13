#include <iostream>
using namespace std;

int main() {
    int c, l, n;
    cin >> c;
    for (int i=0; i < c; i++) {
        cin >> l >> n;
        int f = 0;
        int s = l / 2;
        for (int j=0; j < n; j++) {
            int a;
            cin >> a;
            if ((a > f && a < (l / 2)) || (a < (l - f) && a > (l / 2))) {
                f = a;
            }
            if (a < s || a > (l - s)) {
                s = a;
            }
        }
        cout << min(f, l - f) << " " << max(s, l - s) << endl;
    }
    return 0;
}