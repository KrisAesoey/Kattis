#include <iostream>
#include <algorithm>
#include <vector>
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
    int n, k;
    cin >> n >> k;

    int crossed = 0;
    vector<int> cross;

    for (int i=2; i <= n; i++) {
        if (isPrime(i)) {
            for (int x=i; x <= n; x = x + i) {
                if (find(cross.begin(), cross.end(), x) != cross.end()) {
                    continue;
                }
                cross.push_back(x);
                crossed++;
                if (crossed == k) {
                    break;
                }
            }
        }
        if (crossed == k) {
            cout << cross.back();
            return 0;
        }
    } 
    return 0;
}