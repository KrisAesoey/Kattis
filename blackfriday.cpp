#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> v (6);
    vector<int> groups;
    fill(v.begin(), v.end(), 0);
    int m = 101;
    int s = 0;

    for (int i=0; i < n; i++) {
        cin >> a;
        groups.push_back(a);
        v.at(a - 1) += 1;
    }
    for (int i=0; i < 6; i++) {
        if (v.at(i) <= m && v.at(i) > 0) {
            m = v.at(i);
            s = i + 1;
        }
    }
    if (m > 1) {
        cout << "none" << endl;
    }
    else {
        for (int i=0; i < groups.size(); i++) {
            if (groups[i] == s) {
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}