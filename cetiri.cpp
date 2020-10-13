#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int nums [3];
    nums[0] = x;
    nums[1] = y;
    nums[2] = z;

    int s = min(min(x, y), z);
    int m = 0;
    int l = max(max(x, y), z);

    for (int i=0; i < 3; i++) {
        if (nums[i] != s && nums[i] != l) {
            m = nums[i];
        }
    }

    if (x == y && x == z) {
        cout << x << endl;
        return 0;
    }

    if (abs(m-s) == abs(l-m)) {
        cout << max(max(x, y), z) + abs(m-s);
        return 0;
    }
    if (abs(m-s) < abs(l-m)) {
        cout << m + abs(m-s) << endl;
    }
    else {
        cout << m - abs(l-m) << endl;
    }
    return 0;
}