#include <iostream>
using namespace std;

int main() {
    int d1, d2;
    cin >> d1 >> d2;

    int results = max(1, max(d1, d2) - min(d1, d2) + 1);
    int avg = min(d1, d2) + 1;

    for (int i=0; i < results; i++) {
        cout << avg + i << endl;
    }
    return 0;
}