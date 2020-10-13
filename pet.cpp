#include <iostream>
using namespace std;

int main() {
    int w = 0;
    int m = 0;

    for (int i=1; i < 6; i++) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int t = s1 + s2 + s3 + s4;
        
        if (t > m) {
            w = i;
            m = t;
        }
    }
    cout << w << " " << m << endl;
    return 0;
}