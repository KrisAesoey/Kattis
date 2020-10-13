#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double cm, use;
    cin >> cm >> use;

    int rolls = 1;

    while (true) {
        double left = fmod(cm, use);
        if (left == 0) {
            break;
        }
        use = use - left;
        rolls++;
    }
    cout << rolls << endl;

    return 0;
}