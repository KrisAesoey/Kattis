#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == -1) {
            return 0;
        }

        vector< vector <int> > v (n, vector<int>(n));
        vector<bool> w (9);
        fill(w.begin(), w.end(), -1);

        for (int i=0; i < n; i++) {
            for (int j=0; j < n; j++) {
                int p;
                cin >> p;
                if (p == 1) {
                    v[i][j] = j;
                }
                else {
                    v[i][j] = -1;
                }
            }
            w[i] = false;
        }
        for (int i=0; i < n; i++) {
            for (auto j : v[i]) {
                if (j != -1) {
                    for (auto k : v[j]) {
                        if (k != -1) {
                            if (find(v[k].begin(), v[k].end(), i) != v[k].end()) {
                                w[i] = true;
                            }
                        }
                    }
                }
            }
        }
        for (int i=0; i < n; i++) {
            if (!(w[i])) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}