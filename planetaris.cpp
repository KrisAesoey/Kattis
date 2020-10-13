#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> fleets (n);

    for (int i=0; i < n; i++) {
        int f;
        cin >> f;
        fleets[i] = f;
    }
    sort(fleets.begin(), fleets.end());

    int wins = 0;

    for (int i = 0; i < n; i++) {
        if (a - fleets[i] > 0) {
            a -= fleets[i];
            wins++;
        }
    }
    cout << wins << endl;
    return 0;
}