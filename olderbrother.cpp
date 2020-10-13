#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i=3; (i*i) <= number; i += 2) {
        if (number % i == 0) return false;
        }
    return true;
}

int main() {
    long long q;
    cin >> q;
    int i= 2;
    while(true) {
        if (isPrime(i)) {
            int j = 1;
            while(q >= pow(i, j)) {
                if (q == pow(i, j)) {
                    cout << "yes" << endl;
                    return 0;
                }
                j++;
            }
        }
        (i > 2) ? i += 2 : i++;

        if (q < i) {
            cout << "no" << endl;
            return 0;
        }
    }
}