#include <iostream>
using namespace std;

int main() {
    int n, ring;
    cin >> n >> ring;

    for (int i=0; i < n - 1; i++) {
        int compare;
        cin >> compare;

        if (ring <= compare) {
            cout << "1/" << (compare/ring) << endl;
        }
        else {
            cout << (ring/compare) << "/1" << endl;
        }
    }
    return 0;
}