#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int crossed = 0;
    vector<bool> cross;
    cross.resize(n+1, false);

    for (int i=2; i <= n; i++) {
        if (cross[i]) {
            continue;
        }
        for (int x=i; x <= n; x = x + i) {
            if (cross[x]) {
                continue;
            }
            cross[x] = true;
            crossed++;

            if (crossed == k) {
                cout << x;
                return 0;
            }
        }
    } 
    return 0;
}