#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int times;
    cin >> times;

    int x = 0;

    for (int i=0; i < times; i++) {
        int n;
        cin >> n;
        int p = n % 10;
        x += pow(n / 10, p);
    }

    cout << x << endl;

    return 0;
}