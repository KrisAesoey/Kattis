#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    int counter = 0;
    while (cin >> x) {
        if (x < 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}