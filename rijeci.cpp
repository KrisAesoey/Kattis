#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    double phi = (1 + sqrt(5)) / 2.0;
    int a = (pow(phi, k-1) - pow((1 - phi), k-1))/sqrt(5);
    int b = (pow(phi, k) - pow((1 - phi), k))/sqrt(5);
    cout << a << " " << b << endl;
    return 0;
}