#include <iostream>
using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    if (sequence.size() % 2 == 0) {
        int w, b = 0;

        for (int i=0; i < sequence.size(); i++) {
            if (sequence.at(i) == 'B') {
                b++;
            } 
            else {
                w++;
            }
        }
        if (b == w) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}