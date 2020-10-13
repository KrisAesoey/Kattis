#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int relationships = 0;

    if (n > 1) {
        relationships++;
    }

    for (int i=1; i < n; i++) {
        relationships *= i;
    }

    cout << relationships << endl;
    return 0;
}