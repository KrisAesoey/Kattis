#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double b, k, g;
    cin >> b >> k >> g;
    
    int t = k / g;
    double d = ceil((b - 1) / t);
    cout << max((int) d, 1) << endl;
}