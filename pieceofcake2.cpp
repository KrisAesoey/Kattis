#include <iostream>
using namespace std;

int main() {
    int n, h, v;
    cin >> n >> h >> v;

    int x = (h > n / 2.0) ? h : n - h;
    int y = (v > n / 2.0) ? v : n - v;

    cout << x * y * 4; 

    return 0;
}