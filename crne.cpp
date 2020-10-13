#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long double n;
    cin >> n;
    long long x = ceil(n/2) + 1;
    long long y = floor(n/2) + 1;
    cout << x * y << endl;
    return 0;
}