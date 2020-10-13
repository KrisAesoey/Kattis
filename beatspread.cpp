#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i < n; i++) {
        int s, d;
        cin >> s >> d;
        if (s < d) {
            cout << "impossible" << endl;
            continue;
        }
        if ((s + d) % 2 == 1) {
            cout << "impossible" << endl;
            continue;
        }
        int a = (s + d) / 2;
        int b = s - a;

        cout << max(a, b) << " " << min(a, b) << endl;
    }
    return 0;
}