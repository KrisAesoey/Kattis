#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 0;
    while (true) {
        i++;
        string l;
        cin >> l;
        if (l == "END") {
            return 0;
        }
        cout << i;

        if (l.size() <= 3) {
            cout << " EVEN" << endl;
            continue;
        }
        string pattern = "*";

        for (int j=1; j < l.size(); j++) {
            if (l.at(j) != '*') {
                pattern += l.at(j);
            }
            else {
                break;
            }
        }
        bool even = true;
        for (int j= pattern.size(); j < l.size() - pattern.size(); j += pattern.size()) {
            string match = "";
            for (int k= 0; k < pattern.size(); k += 1) {
                match += l.at(k + j);
            }
            if (pattern != match) {
                even = false;
                break;
            }
        }
        if (even) {
            cout << " EVEN" << endl;
        }
        else {
            cout << " NOT EVEN" << endl;
        }
    }
}