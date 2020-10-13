#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temps [n];
    for (int i = 0; i < n; i++) {
        int day;
        cin >> day;
        temps[i] = day;
    }
    int d;
    int t = 100;

    for (int i = 1; i < n - 1; i++) {
        if (temps[i-1] < t && temps[i+1] < t) {
            d = i;
            t = max (temps[i-1], temps[i+1]);
        }
    }
    cout << d << " " << t << endl;
    return 0;
}