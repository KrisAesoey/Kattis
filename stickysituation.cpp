#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<long> input (n);
    fill(input.begin(), input.end(), 0);

    for (int i=0; i < n; i++) {
        long k;
        cin >> k;
        input[i] = k;
    }

    sort(input.rbegin(), input.rend());

    for (int i=0; i < n - 2; i++) {
        if (input[i] < (input[i+1] + input[i+2])) {
            cout << "possible" << endl;
            return 0;
        }
    }

    cout << "impossible" << endl;

    return 0;
}