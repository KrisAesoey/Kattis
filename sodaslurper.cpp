#include <iostream>
using namespace std;

int main() {
    int e, f, c;
    cin >> e >> f >> c;

    int bottles = 0;
    int usable = e + f;

    while(usable >= c) {
        int newBottles = usable / c;
        bottles += newBottles;
        usable = (usable % c) + newBottles;
    }
    cout << bottles << endl;
    return 0;
}