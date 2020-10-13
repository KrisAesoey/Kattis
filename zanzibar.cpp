#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0; i < t; i++) {
        int turtles;
        int immigrants = 0;
        int total = 0;
        while (cin >> turtles) {
            if (turtles == 0) {
                break;
            }
            else {
                if (turtles > 2 * total && total != 0) {
                    immigrants += (turtles - (2 * total));
                }
                total = turtles;
            }
        }
        cout << immigrants << endl;
    }
    return 0;
}