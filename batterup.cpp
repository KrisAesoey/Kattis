#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    float total = 0;
    int runs = 0;
    for (int i=0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            continue;
        }
        total += x;
        runs++;
    }
    cout << total / runs << endl;
    return 0;
}