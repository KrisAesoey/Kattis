#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, c, pX, pY;
    cin >> n >> c >> pX >> pY;

    vector<int> distance (2000001, 0);

    for (int i=0; i < n; i++) {
        int x1, y1, x2, y2, d1, d2;
        cin >> x1 >> y1 >> x2 >> y2;

        bool xOverlap = (x1 <= pX && pX <= x2) || (x1 >= pX && pX >= x2);
        bool yOverlap = (y1 <= pY && pY <= y2) || (y1 >= pY && pY >= y2);

        int minXDist = min(abs(pX - x1), abs(pX - x2));
        int minYDist = min(abs(pY - y1), abs(pY - y2));
        int maxXDist = max(abs(pX - x1), abs(pX - x2));
        int maxYDist = max(abs(pY - y1), abs(pY - y2));

        d1 = minXDist + minYDist;

        if (xOverlap && yOverlap) {
            d1 = 0;
        }
        else if (xOverlap) {
            d1 = minYDist;
        }
        else if (yOverlap) {
            d1 = minXDist;
        }
        distance.at(d1) += 1;
        distance.at(maxXDist + maxYDist + 1) -= 1;
    }
    int fill = distance.at(0);
    for (int i=1; i < distance.size(); i++) {
        fill += distance.at(i);
        distance.at(i) = fill;
    }
    for (int i=0; i < c; i++) {
        int call;
        cin >> call;
        cout << distance.at(call) << endl;
    }
    return 0;
}