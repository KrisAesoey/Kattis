#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i < n; i++) {
        char r;
        int d, h, m;
        cin >> r >> d >> h >> m;

        if (r == 'B') {
            if (m >= d) {
                m = m - d;
            }
            else {
                if (d > 60) {
                    (h < 2) ? h = 24 + (h - 2) : h -= 2;
                }
                else {
                    (h < 1) ? h = 24 + (h - 1) : h -= 1;
                }
                m = abs(60 - abs(m - d));
            }
        }
        else {
            if (m + d < 60) {
                m = m + d;
            }
            else {
                if (m + d >= 120) {
                    (h > 21) ? h = 0 - (h - 24) : h += 2;
                    m = m + d - 120;
                }
                else {
                    (h > 21) ? h = 0 - (h - 23) : h += 1;
                    m = m + d - 60;
                }
            }
        }
        cout << h << " " << m << endl;   
    }
}