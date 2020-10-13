#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0; i < t; i++) {
        int n;
        cin >> n;
        cout << ceil(n / 400.0) << endl;
    }
    return 0;
}