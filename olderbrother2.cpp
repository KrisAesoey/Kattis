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
    int q;
    cin >> q;
    int i = 1;
    int r = q;

    while(q >= i) {
        if (q == pow(r, i)) {
            if (isPrime(r)) {
                cout << "yes" << endl;
                return 0;
            }
        }
        i++;
        r = pow(q, 1.0/i);

        while(!isPrime(r)) {
            if (r < 2) { 
                cout << "no" << endl;
                return 0;
            }
            r = pow(q, 1.0/i);
            i++;
        }
    }
    cout << "no" << endl;
    return 0;
}