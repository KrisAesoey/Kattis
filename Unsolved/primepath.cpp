#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i=3; (i*i) <= number; i+2) {
        if (number % i == 0) return false;
        }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x == y) {
            cout << 0 << endl;
            continue;
        }
        for (int j=2; j < 9000; j += 2) {
            if (j > 9 && j % 10 != 0) {
                continue;
            }

        }
    }
    return 0;
}