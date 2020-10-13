#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long double x;
    cin >> x;
    x *= 1000 * 5280;
    x /= 4854;
    x += .50001;
    cout << int(x) << endl;
    return 0;
}