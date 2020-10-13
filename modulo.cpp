#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> modulo (42);
    fill(modulo.begin(), modulo.end(), 0);
    int n;

    while (cin >> n) {
        int m = n % 42;
        modulo[m] = modulo[m] + 1;
    }

    int unique = 0;
    for (int i=0; i < modulo.size(); i++) {
        if (modulo[i] > 0) {
            unique++;
        }
    }
    cout << unique << endl;
}