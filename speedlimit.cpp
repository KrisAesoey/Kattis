#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == -1) {
            return 0;
        }
        int miles = 0;
        int hours = 0;
        for (int i=0; i < n; i++) {
            int d, t;
            cin >> d >> t;
            miles += d * (t- hours);
            hours = t;
        }
        cout << miles << " miles" << endl;
    }
}