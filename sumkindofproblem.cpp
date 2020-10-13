#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;

    for (int i=0; i < p; i++) {
        int k, n;
        cin >> k >> n;
        int a = 0;
        int o = 0;
        int e = 0;

        for (int j=0; j <= n*2; j++) {
            if (j <= n) {
                a += j;
            }
            if (j % 2 == 0) {
                e += j;
            }
            else {
                o += j;
            }
        }
        cout << k << " " << a << " " << o << " " << e << endl;
    }
    return 0;
}