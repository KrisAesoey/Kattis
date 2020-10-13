#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b (n);

    for (int i=0; i < n; i++) {
        int x;
        cin >> x;
        b[i] = x;
    }

    sort(b.rbegin(), b.rend());
    int p = 0;

    for (int i=0; i < n; i++) {
        if (i % 3 == 2) {
            continue;
        }
        p += b[i];
    }

    cout << p << endl;

    return 0;
}