#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> xs;
    vector<int> ys;
    for (int i=0; i < 6; i++) {
        int p;
        cin >> p;
        if (i % 2 == 0) {
            xs.push_back(p);
        }
        else {
            ys.push_back(p);
        }
    }
    int a = 0;
    int b = 0;
    for (int i=0; i < 3; i++) {
        if (count(xs.begin(), xs.end(), xs.at(i)) == 1) {
            a = xs.at(i);
        }
        if (count(ys.begin(), ys.end(), ys.at(i)) == 1) {
            b = ys.at(i);
        }
    }
    cout << a << " " << b << endl;
    return 0;
}