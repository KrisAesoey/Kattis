#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int r = 0;
    for (int i=0; i < n; i++) {
        int p;
        cin >> p;
        if (p >= x) {
            r = r - (p - x);
        } 
        else {
            r += (x - p);
        }
    }
    cout << r + x << endl;
    return 0;
}