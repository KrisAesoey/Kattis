#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> names (n);

    for (int i=0; i < n; i++) {
        string action, name;
        cin >> action >> name;
        if (action == "entry" && names[name]) {
        }
    }
}