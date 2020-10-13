#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nana (3);
    nana[2] = "N";
    nana[1] = "A";

    int n, k;
    cin >> n >> k;

    for (int i=2; i < 88; i++) {
        nana[0] = nana[2] + nana[1];
        nana[2] = nana[1];
        nana[1] = nana[0];
    }
    cout << nana[0].at(k-1) << endl;
    return 0;
}