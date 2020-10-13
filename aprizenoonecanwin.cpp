#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long items, horn;
    cin >> items >> horn;

    int costs [items];
    int offers = 0;

    for (int i=0; i < items; i++) {
        long cost;
        cin >> cost;
        costs[i] = cost;
    }
    if (items == 1) {
        cout << 1 << endl;
        return 0;
    }
    sort (costs, costs+items, greater<int>());

    for (int i=0; i < items; i++) {
        int combos = 0;
        if (costs[i] <= horn) {
            int j=items-1;
            while(costs[i] + costs[j] <= horn) {
                if (i == j) {
                    break;
                } 
                combos++;
                j--;
            }
            combos++;
            if (combos > offers) {
                offers = combos;
            }
        }
    }
    cout << offers << endl;
    return 0;
}