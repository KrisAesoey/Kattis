#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, k;
    cin >> n >> k;
    if (n <= pow(2, k)) {
        cout << "Your wish is granted!" << endl;
    }
    else {
        cout << "You will become a flying monkey!" << endl;
    }
    return 0;
}