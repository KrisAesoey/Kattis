#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int u = 0;
    int d = 0;
    int c = 0;

    char a = s.at(0);

    for (int i=1; i < s.size(); i++) {
        if (i == 1) {
            if (a != s.at(1)) {
                if (a == 'U') {
                    u += 2;
                    d++;
                }
                else {
                    u ++;
                    d += 2;
                }
                c++;
            }
            else {
                if (a == 'U') {
                    d += 1;
                }
                else {
                    u += 1;
                }
            }
        }
        else {
            if (s.at(i) != s.at(i - 1)) {
                c++;
            }
            if (s.at(i) == 'U') {
                d += 2;
            }
            else {
                u += 2;
            }
        }
    }

    cout << u << endl;
    cout << d << endl;
    cout << c << endl;
    return 0;
}