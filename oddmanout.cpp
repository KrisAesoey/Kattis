#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i ++) {
        int g;
        cin >> g;
        vector<long int> guests;

        for (int j = 0; j < g; j++) {
            long int id;
            cin >> id;
            guests.push_back(id);
        }
        long int odd = -1;
        sort(guests.begin(), guests.end());

        for (int j = 0; j < guests.size() - 1; j += 2) {
            if (guests[j] != guests[j+1]) {
                odd = guests[j];
            }
        }
        if (odd == -1) {
            odd = guests.back();
        }

        cout << "Case #" << i << ": " << odd << endl;
    }
    return 0;
}