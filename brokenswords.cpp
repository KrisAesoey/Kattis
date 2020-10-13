#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int tb = 0;
    int lr = 0;

    for (int i=0; i < n; i++) {
        string s;
        cin >> s;
        if (s.at(0) == '0') {
            tb++;
        }
        if (s.at(1) == '0') {
            tb++;
        }
        if (s.at(2) == '0') {
            lr++;
        }
        if (s.at(3) == '0') {
            lr++;
        }
    }
    int t = floor(min(tb, lr) / 2);
    tb = tb - t * 2;
    lr = lr - t * 2;
    cout << t << " " << tb << " " << lr << endl;
    return 0;
}