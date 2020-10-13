#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int heads, knights;
    while (cin >> heads >> knights && heads != 0 && knights != 0) {

        vector<int> hSizes (heads);
        vector<int> kSizes (knights);

        for (int i=0; i < heads; i++) {
            int size;
            cin >> size;
            hSizes[i] = size;
        }

        for (int i=0; i < knights; i++) {
            int size;
            cin >> size;
            kSizes[i] = size;
        }
        sort(hSizes.begin(), hSizes.end());
        sort(kSizes.begin(), kSizes.end());

        int gold = 0;

        while (hSizes.size() > 0 && kSizes.size() > 0) {
            if (kSizes[0] >= hSizes[0]) {
                hSizes.erase(hSizes.begin());
                gold += kSizes[0];
            }
            kSizes.erase(kSizes.begin());
        }

        if (hSizes.size() > 0) {
            cout << "Loowater is doomed!" << endl;
        }
        else {
            cout << gold << endl;
        }
    }
    return 0;
}