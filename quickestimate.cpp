#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i < n; i++) {
        string cost;
        cin >> cost;
        cout << cost.size() << endl;
    }
    return 0;
}