#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int T;
    cin >> T;

    int limits [10] = {200, 180, 160, 140, 120, 100, 80, 60, 40, 20};
    for (int i=0; i < T; i++) {
        long n;
        cin >> n;
        long score = 0;
        for (int j=0; j < n; j++) {
            int x, y;
            double r;
            cin >> x >> y;
            r = sqrt(pow(x, 2) + pow(y, 2));
            for (int k=0; k < 10; k++) {
                if (r <= limits[k]) {
                    score++;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}