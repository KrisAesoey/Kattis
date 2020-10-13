#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int e = 0;
    int t = 0;

    for (int i=0; i < n; i++) {
        int f;
        cin >> f;
        if (e + f <= c) {
            e += f;
            t++;
        }
    }
    cout << t << endl;
    return 0;
}