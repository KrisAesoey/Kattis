#include <iostream>
using namespace std;

int main() {
    string ability;
    string required;

    cin >> ability;
    cin >> required;

    if (ability.length() >= required.length()) {
        cout << "go";
    }
    else {
        cout << "no";
    }
    return 0;
}