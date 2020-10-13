#include <iostream>
using namespace std;

int main() {
    string m;
    cin >> m;
    int p = 1;

    for (char &c : m) {
        if (c == 'A' && p != 3) {
            (p == 1) ? p = 2 : p = 1;
        }
        if (c == 'B' && p != 1) {
            (p == 2) ? p = 3 : p = 2;
        }
        if (c == 'C' && p != 2) {
            (p == 1) ? p = 3 : p = 1;
        }
    }
    cout << p << endl;
    return 0;
}