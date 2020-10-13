#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> hs (6);
    int t1 [3];
    int t2 [3];
    int h1, h2;

    for (int i=0; i < 6; i++) {
        int h;
        cin >> h;
        hs[i] = h;
    }

    sort(hs.rbegin(), hs.rend());

    cin >> h1 >> h2;

    for (int i=0; i < 3; i++) {
        int s = 0;
        for (int j=1; j < 5; j++) {
            if (j <= i) {
                continue;
            }
            for (int k=2; k < 6; k++) {
                if (k <= j || k <= i) {
                    continue;
                }
                if (hs[i] + hs[j] + hs[k] == h1) {
                    t1[0] = hs[i];
                    t1[1] = hs[j];
                    t1[2] = hs[k];
                    for (int l=0; l < 6; l++) {
                        if (l != i && l != j && l != k) {
                            s += hs[l];
                        }
                    }
                    if (s == h2) {
                        hs[i] = 0;
                        hs[j] = 0;
                        hs[k] = 0;
                        break;
                    }
                }
            }
            if (s == h2) {
                break;
            }

        }
        if (s == h2) {
            break;
        }
    }
    for (int i=0; i < 3; i++) {
        cout << t1[i] << " ";
    }
    for (int i=0; i < 6; i++) {
        if (hs[i] != 0) {
            cout << hs[i] << " ";
        }
    }

    return 0;
}