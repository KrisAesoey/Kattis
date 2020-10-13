#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i <= n; i++) {
        string line;
        getline(cin, line);
        if (line.find("Simon says ") == 0) {
            line.erase(0, 11);
            cout << line << endl;
        }
    }
    return 0;
}