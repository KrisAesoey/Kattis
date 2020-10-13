#include <iostream>
using namespace std;

int main() {
    int x, y;
    int q;
    cin >> x >> y;
    q = (x < 0) ? ((y < 0) ? 3 : 2) : ((y < 0) ? 4 : 1);
    
    cout << q << endl;
}