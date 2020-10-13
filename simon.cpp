#include <iostream>
#include <string>
using namespace std;

int main() {
    int lines;
    cin >> lines;
    cin.ignore();

    for (int i=0; i < lines; i++) {
        string line;
        getline(cin, line);

        string simon = "simon says";

        int subs = line.find(simon);

        if (subs != string::npos) {
            line.erase(0, simon.length() + 1);
            cout << line << endl;
        }
        else {
            cout << endl;
        }
    }
    return 0;
}